#include <iostream>
using namespace std;

void calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    float snowMeltAmount;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowMeltAmount = snowOnGround * snowMeltRate;
        snowOnGround -= snowMeltAmount;
    }
    cout << snowOnGround << endl;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate);
    return 0;
}