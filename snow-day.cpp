#include <iostream>

using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    float finalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        float snowFall = snowFallRate - (meltRate * finalSnow);
        float meltedSnow = meltRate * finalSnow;
        finalSnow = finalSnow + snowFall - meltedSnow;
        if (finalSnow < 0) {
            finalSnow = 0;
        }
    }
    finalSnow = finalSnow - meltRate;
    return finalSnow;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << finalSnow << endl;

    return 0;
}