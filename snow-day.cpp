#include <iostream>

using namespace std;

double calculateSnow(float hours, double snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        double snowFall = snowFallRate - meltRate * snowOnGround;
        snowOnGround = snowFall >= 0 ? snowOnGround + snowFall : 0;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    double finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << finalSnow << endl;

    return 0;
}