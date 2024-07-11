#include <iostream>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        totalSnow -= std::min<float>(totalSnow, rate * melt);
    }
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    std::cin >> hours >> groundSnow >> rate >> melt;

    float result = snowDay(hours, groundSnow, rate, melt);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;

    return 0;
}