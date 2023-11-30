#include <iostream>
using namespace std;

double calculateSnow(double hours, double snowOnGround, double snowFallRate, double snowMeltingRate) {
    for (int i = 0; i <= hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltingRate);
    }
    return snowOnGround;
}

int main() {
    double hours, snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate) << endl;
    return 0;
}