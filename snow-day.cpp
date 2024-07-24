#include <iostream>

double snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    double totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow *= (1 - meltingRate);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfFall, meltingRate;

    std::cin >> hours >> groundSnow >> rateOfFall >> meltingRate;
    double result = snowDay(hours, groundSnow, rateOfFall, meltingRate);

    std::cout << std::fixed << std::setprecision(10) << result << std::endl;

    return 0;
}