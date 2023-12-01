#include <iostream>
using namespace std;

float calculateSnowOnGround(int hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate; // add snow
        snowOnGround -= snowOnGround * snowMeltRate; // melt snow
    }
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << calculateSnowOnGround(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}