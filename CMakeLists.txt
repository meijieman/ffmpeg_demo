cmake_minimum_required(VERSION 3.13)
project(ffmpeg_demo)

set(CMAKE_CXX_STANDARD 14)

# 添加头文件搜索路径
include_directories(include)
# 添加库文件搜索路径
link_directories(lib)

add_executable(ffmpeg_demo main.cpp)

target_link_libraries(ffmpeg_demo
        avcodec-58.dll
        avdevice-58.dll
        avfilter-7.dll
        avformat-58.dll
        avutil-56.dll
        postproc-55.dll
        swresample-3.dll
        swscale-5.dll
        )