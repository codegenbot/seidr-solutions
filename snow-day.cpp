#include <iostream>

using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    float finalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        float snowFall = (snowFallRate - meltRate) * 1;
        finalSnow = finalSnow + snowFall;
        if (finalSnow - meltRate < 0) {
            finalSnow = 0;
        }
    }
    return finalSnow;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << finalSnow << endl;

    return 0;
}