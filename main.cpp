/*
 * Copyright 2020-present Ksyun
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <iostream>
#include <sstream>
#include <string>

#include <SDL2/SDL.h>
#include <boost/scope_exit.hpp>

std::string GetRenderFlagsName(Uint32 flags);

int main(int argc, char* argv[]) {
  if (-1 == SDL_Init(SDL_INIT_VIDEO)) {
    std::cout << "Could not initialize SDL: " << SDL_GetError() << '\n';
    return EXIT_FAILURE;
  }
  BOOST_SCOPE_EXIT_ALL(&) { SDL_Quit(); };

  int num = SDL_GetNumRenderDrivers();
  std::cout << "Number of render drivers: " << num << '\n';
  
  for (int i = 0; i < num; ++i) {
    SDL_RendererInfo info = {};
    if (0 == SDL_GetRenderDriverInfo(i, &info)) {
      std::cout << "\n[" << i << "] " << info.name
                << "\n\tflags: " << GetRenderFlagsName(info.flags)
                << "\n\tnum_texture_formats: " << info.num_texture_formats;
      for (Uint32 j = 0; j < info.num_texture_formats; ++j) {
        std::cout << "\n\t\t(" << j << ") "
                  << SDL_GetPixelFormatName(info.texture_formats[j]);
      }

      std::cout << "\n\tmax_texture_width: " << info.max_texture_width
                << "\n\tmax_texture_height: " << info.max_texture_height;
    } else {
      std::cout << "\nSDL_GetRenderDriverInfo(" << i
                << ") failed: " << SDL_GetError();
    }
  }

  return EXIT_SUCCESS;
}

void PadOrString(std::string& name, const std::string& pad) {
  if (!name.empty()) {
    name.append(" | ");
  }
  name.append(pad);
}

std::string GetRenderFlagsName(Uint32 flags) {
  std::string name;

#define PAD_OR_STRING(x)   \
  if (flags & x) {         \
    flags &= ~x;           \
    PadOrString(name, #x); \
  }

  PAD_OR_STRING(SDL_RENDERER_SOFTWARE);
  PAD_OR_STRING(SDL_RENDERER_ACCELERATED);
  PAD_OR_STRING(SDL_RENDERER_PRESENTVSYNC);
  PAD_OR_STRING(SDL_RENDERER_TARGETTEXTURE);

  if (flags) {
    std::stringstream ss;
    ss << flags;
    PadOrString(name, ss.str());
  }
  return name;
}
