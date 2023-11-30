#include <iostream>
#include <cmath>
using namespace std;

double calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - meltRate);
    }
    return round(snowOnGround * 100) / 100.0;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    double finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << finalSnow << endl;

    return 0;
}