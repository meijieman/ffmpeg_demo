cmake_minimum_required(VERSION 3.13)
project(ffmpeg_demo)

set(CMAKE_CXX_STANDARD 14)

# 添加头文件搜索路径
include_directories(include)
# 添加库文件搜索路径
link_directories(lib)

add_executable(ffmpeg_demo main.cpp)

target_link_libraries(ffmpeg_demo
        avcodec-58
        avdevice-58
        avfilter-7
        avformat-58
        avutil-56
        postproc-55
        swresample-3
        swscale-5
        )