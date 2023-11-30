#include <iostream>

using namespace std;

double calculateSnow(double hours, double snowOnGround, double snowFallRate, double meltRate) {
    double finalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        double snowFall = snowFallRate - meltRate * finalSnow;
        finalSnow = finalSnow + snowFall;
        if (finalSnow < 0) {
            finalSnow = 0;
        }
    }
    return finalSnow;
}

int main() {
    double hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    double finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << finalSnow << endl;

    return 0;
}