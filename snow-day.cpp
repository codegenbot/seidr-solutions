#include <iostream>
#include <cmath>

float snowDay(int hours, float snow, float snowFall, float snowMelting) {
    float totalSnow = snow;
    for (int i = 1; i <= hours; i++) {
        totalSnow = totalSnow + snowFall - (totalSnow * snowMelting);
    }
    return totalSnow;
}

int main() {
    int hours;
    float snow, snowFall, snowMelting;
    std::cin >> hours >> snow >> snowFall >> snowMelting;
    
    float result = snowDay(hours, snow, snowFall, snowMelting);
    std::cout << result << std::endl;
    
    return 0;
}