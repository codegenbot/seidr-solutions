#include <iostream>
using namespace std;

double calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (float i = 0; i < hours; i += 1) {
        float updatedSnowOnGround = snowOnGround + snowFallRate - snowOnGround * snowMeltRate;
        snowOnGround = updatedSnowOnGround;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}