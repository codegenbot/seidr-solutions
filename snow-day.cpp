#include <iostream>
using namespace std;

double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltingRate) {
    double snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingRate;
    }
    return snowOnGround;
}

int main() {
    double hours, initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    double result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << result << endl;
    return 0;
}