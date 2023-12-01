#include <iostream>
using namespace std;

float calculateSnow(int hours, float snowOnGround, float snowFallRate, float meltRate) {
    float totalSnow = snowOnGround;

    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= meltRate * totalSnow;
    }

    return totalSnow;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, meltRate;

    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    float result = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);

    cout << result << endl;

    return 0;
}