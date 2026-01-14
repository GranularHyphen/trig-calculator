//return values

#include <math.h>
#include "trigonometry.h"

float sector_length(float radius, float angle) {
    return radius * angle;
}

float sector_area(float radius, float angle) {
    return 0.5f * radius * radius * angle;
}

float distance(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    return sqrtf(dx*dx + dy*dy);
}
