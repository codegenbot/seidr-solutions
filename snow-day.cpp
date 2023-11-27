#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (float i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        float meltedSnow = snowOnGround * snowMeltRate;
        snowOnGround -= meltedSnow;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}