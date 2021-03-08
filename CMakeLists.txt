cmake_minimum_required(VERSION 3.4)

project(test_vulkan_so)

#find_package(Python3 REQUIRED Interpreter Development)
find_package(ncnn CONFIG REQUIRED)

add_library(yolov4_vk_so SHARED yolov4_vk.cpp)
target_compile_definitions(yolov4_vk_so PRIVATE YOLOV4_VK_EXPORT)
add_executable(yolov4 main.cpp)

target_include_directories(yolov4_vk_so PRIVATE ncnn)
target_link_libraries(yolov4_vk_so PRIVATE ncnn)
target_include_directories(yolov4 PRIVATE)
target_link_libraries(yolov4 PRIVATE yolov4_vk_so)

