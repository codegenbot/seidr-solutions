#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * meltRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << result << endl;
    return 0;
}