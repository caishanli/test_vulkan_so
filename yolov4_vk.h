#pragma once

#ifdef YOLOV4_VK_EXPORT
#define YOLOV4_VK_API __declspec( dllexport )
#else
#define YOLOV4_VK_API __declspec( dllimport )
#endif

void YOLOV4_VK_API detect();