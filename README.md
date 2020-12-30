# test_boost

## Compile

On Windows

```
.\build.cmd
```

On macOS, Debian

```
./build.sh
```

## Expection 

On Windows, it should print something like the folowing:

```
Number of render drivers: 5

[0] direct3d
        flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
        num_texture_formats: 1
                (0) SDL_PIXELFORMAT_ARGB8888
        max_texture_width: 0
        max_texture_height: 0
[1] direct3d11
        flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
        num_texture_formats: 6
                (0) SDL_PIXELFORMAT_ARGB8888
                (1) SDL_PIXELFORMAT_RGB888
                (2) SDL_PIXELFORMAT_YV12
                (3) SDL_PIXELFORMAT_IYUV
                (4) SDL_PIXELFORMAT_NV12
                (5) SDL_PIXELFORMAT_NV21
        max_texture_width: 0
        max_texture_height: 0
[2] opengl
        flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
        num_texture_formats: 4
                (0) SDL_PIXELFORMAT_ARGB8888
                (1) SDL_PIXELFORMAT_ABGR8888
                (2) SDL_PIXELFORMAT_RGB888
                (3) SDL_PIXELFORMAT_BGR888
        max_texture_width: 0
        max_texture_height: 0
[3] opengles2
        flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
        num_texture_formats: 4
                (0) SDL_PIXELFORMAT_ARGB8888
                (1) SDL_PIXELFORMAT_ABGR8888
                (2) SDL_PIXELFORMAT_RGB888
                (3) SDL_PIXELFORMAT_BGR888
        max_texture_width: 0
        max_texture_height: 0
[4] software
        flags: SDL_RENDERER_SOFTWARE | SDL_RENDERER_TARGETTEXTURE
        num_texture_formats: 8
                (0) SDL_PIXELFORMAT_ARGB8888
                (1) SDL_PIXELFORMAT_ABGR8888
                (2) SDL_PIXELFORMAT_RGBA8888
                (3) SDL_PIXELFORMAT_BGRA8888
                (4) SDL_PIXELFORMAT_RGB888
                (5) SDL_PIXELFORMAT_BGR888
                (6) SDL_PIXELFORMAT_RGB565
                (7) SDL_PIXELFORMAT_RGB555
        max_texture_width: 0
        max_texture_height: 0
```

On macOS, it should print something like the folowing:

```
Number of render drivers: 4

[0] metal
	flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
	num_texture_formats: 6
		(0) SDL_PIXELFORMAT_ARGB8888
		(1) SDL_PIXELFORMAT_ABGR8888
		(2) SDL_PIXELFORMAT_YV12
		(3) SDL_PIXELFORMAT_IYUV
		(4) SDL_PIXELFORMAT_NV12
		(5) SDL_PIXELFORMAT_NV21
	max_texture_width: 0
	max_texture_height: 0
[1] opengl
	flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
	num_texture_formats: 4
		(0) SDL_PIXELFORMAT_ARGB8888
		(1) SDL_PIXELFORMAT_ABGR8888
		(2) SDL_PIXELFORMAT_RGB888
		(3) SDL_PIXELFORMAT_BGR888
	max_texture_width: 0
	max_texture_height: 0
[2] opengles2
	flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
	num_texture_formats: 4
		(0) SDL_PIXELFORMAT_ARGB8888
		(1) SDL_PIXELFORMAT_ABGR8888
		(2) SDL_PIXELFORMAT_RGB888
		(3) SDL_PIXELFORMAT_BGR888
	max_texture_width: 0
	max_texture_height: 0
[3] software
	flags: SDL_RENDERER_SOFTWARE | SDL_RENDERER_TARGETTEXTURE
	num_texture_formats: 8
		(0) SDL_PIXELFORMAT_ARGB8888
		(1) SDL_PIXELFORMAT_ABGR8888
		(2) SDL_PIXELFORMAT_RGBA8888
		(3) SDL_PIXELFORMAT_BGRA8888
		(4) SDL_PIXELFORMAT_RGB888
		(5) SDL_PIXELFORMAT_BGR888
		(6) SDL_PIXELFORMAT_RGB565
		(7) SDL_PIXELFORMAT_RGB555
	max_texture_width: 0
	max_texture_height: 0
```

On Debian, it should print something like the folowing:

```
Number of render drivers: 3

[0] opengl
	flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
	num_texture_formats: 1
		(0) SDL_PIXELFORMAT_ARGB8888
	max_texture_width: 0
	max_texture_height: 0
[1] opengles2
	flags: SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE
	num_texture_formats: 4
		(0) SDL_PIXELFORMAT_ARGB8888
		(1) SDL_PIXELFORMAT_ABGR8888
		(2) SDL_PIXELFORMAT_RGB888
		(3) SDL_PIXELFORMAT_BGR888
	max_texture_width: 0
	max_texture_height: 0
[2] software
	flags: SDL_RENDERER_SOFTWARE | SDL_RENDERER_TARGETTEXTURE
	num_texture_formats: 8
		(0) SDL_PIXELFORMAT_ARGB8888
		(1) SDL_PIXELFORMAT_ABGR8888
		(2) SDL_PIXELFORMAT_RGBA8888
		(3) SDL_PIXELFORMAT_BGRA8888
		(4) SDL_PIXELFORMAT_RGB888
		(5) SDL_PIXELFORMAT_BGR888
		(6) SDL_PIXELFORMAT_RGB565
		(7) SDL_PIXELFORMAT_RGB555
	max_texture_width: 0
	max_texture_height: 0
```
