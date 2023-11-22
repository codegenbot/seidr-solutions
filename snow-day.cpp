#include <iostream>

float calculateAmountOfSnow(int hours, float snowOnGround, float snowFallRate, float meltProportion) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - meltProportion);
    }
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, meltProportion;

    // Read input from user
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltProportion;

    // Calculate the amount of snow on the ground after the given hours
    float result = calculateAmountOfSnow(hours, snowOnGround, snowFallRate, meltProportion);

    // Print the result
    std::cout << result << std::endl;

    return 0;
}