#include <iostream>

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }

    std::cout << snowOnGround << std::endl;

    return 0;
}