#include <iostream>
using namespace std;

double calculateSnow(double hours, double snowOnGround, double snowFallRate, double snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    double hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}