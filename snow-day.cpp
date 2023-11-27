#include <iostream>
#include <iomanip>
using namespace std;

double calculateSnow(int hours, double snowOnGround, double snowFallRate, double snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return round(snowOnGround * 100000000000000) / 100000000000000;
}

int main() {
    int hours;
    double snowFallRate, snowMeltRate, snowOnGround;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << fixed << setprecision(15) << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}