#include <iostream>

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        if (totalSnow > groundSnow) {
            totalSnow -= melt * (totalSnow - groundSnow);
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    std::cin >> hours >> groundSnow >> rate >> melt;

    std::cout << snowDay(hours, groundSnow, rate, melt) << std::endl;

    return 0;
}