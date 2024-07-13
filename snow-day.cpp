```c++
#include <iostream>
#include <algorithm>

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += (rateOfSnowFall / 100.0f); // add new snow
        groundSnow -= groundSnow * proportionMeltingPerHour; // melt existing snow
        groundSnow = std::max(0.0f, groundSnow);
    }
    return groundSnow;
}

int main() {
    float result = snowDay(4, 10.0f, 2.0f, 0.05f);
    std::cout << "Snow on the ground after 4 hours: " << result << std::endl;
    return 0;
}