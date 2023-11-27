#include <iostream>
using namespace std;

double calculateSnow(int hours, double snowOnGround, double snowFallRate, double snowMeltRate) {
    for (int i = 0; i < static_cast<int>(hours); i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    double snowFallRate, snowMeltRate, snowOnGround;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}