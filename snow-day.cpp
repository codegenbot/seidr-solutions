#include <iostream>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float result = groundSnow;
    for (int i = 0; i < hours; i++) {
        result += rate - melt;
    }
    return result;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    std::cin >> hours >> groundSnow >> rate >> melt;

    float result = snowDay(hours, groundSnow, rate, melt);
    std::cout << "Amount of snow on the ground after " << hours << " hours: " << result << std::endl;

    return 0;
}