#pragma once

#include <net.h>
#include "yolov4_vk.h"

void detect()
{
    ncnn::Net yolov4;
    yolov4.opt.use_vulkan_compute = true;
    yolov4.load_param("yolov4-tiny-opt.param");
    //yolov4.load_model("yolov4-tiny-opt.bin");

    return;
}