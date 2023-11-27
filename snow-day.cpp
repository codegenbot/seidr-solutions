#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    float snowOnGround = initialSnow;
    
    for (int i = 0; i < hours+1; i++) {
        snowOnGround += rateOfSnowfall;
        snowOnGround -= snowOnGround * proportionOfMelting;
    }
    
    return snowOnGround;
}

int main() {
    float hours, initialSnow, rateOfSnowfall, proportionOfMelting;
    std::cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfMelting;
    
    float result = calculateSnow(hours, initialSnow, rateOfSnowfall, proportionOfMelting);
    std::cout << std::fixed << std::setprecision(15) << result << std::endl;
    
    return 0;
}