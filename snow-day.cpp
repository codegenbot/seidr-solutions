#include <iostream>
#include <iomanip>

using namespace std;

double calculateSnow(int hours, double initialSnow, double snowFallRate, double snowMeltingRate) {
    double snowOnGround = initialSnow;

    for (int i = 0; i < hours; i++) {
        double snowMelted = snowOnGround * snowMeltingRate;
        snowOnGround += snowFallRate;
        snowOnGround -= snowMelted;
    }

    return snowOnGround;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;

    double result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << fixed << setprecision(20) << result << endl;

    return 0;
}