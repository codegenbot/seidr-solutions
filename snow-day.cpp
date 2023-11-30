#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    float finalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        float snowFall = (snowFallRate - meltRate) * finalSnow;
        finalSnow = finalSnow + snowFall;
        if (finalSnow < 0) {
            finalSnow = 0;
        }
    }
    return finalSnow;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    std::cout << std::fixed << std::setprecision(16) << finalSnow << std::endl;

    return 0;
}