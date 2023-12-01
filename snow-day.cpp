#include <iostream>
using namespace std;

float calculateSnowOnGround(int hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    float result = calculateSnowOnGround(hours, snowOnGround, snowFallRate, snowMeltRate);
    cout << result << endl;
    return 0;
}