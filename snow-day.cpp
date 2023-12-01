#include <iostream>
#include <iomanip>

using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate);
    cout << fixed << setprecision(15) << result << endl;
    return 0;
}