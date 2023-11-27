#include <iostream>
using namespace std;

double calculateSnow(int hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i += 1) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}