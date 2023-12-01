#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        float meltedSnow = snowOnGround * snowMeltRate;
        snowOnGround = snowOnGround - meltedSnow + snowFallRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate);
    cout.precision(15);
    cout << fixed << result << endl;
    return 0;
}