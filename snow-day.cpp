#include <iostream>
using namespace std;

double calculateSnow(float hours, double snowOnGround, float snowFallRate, float snowMeltRate) {
    for (float i = 0; i < hours; i += 1) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowFallRate, snowMeltRate;
    double snowOnGround;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}