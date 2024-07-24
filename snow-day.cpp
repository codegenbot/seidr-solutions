#include <iostream>
using namespace std;

double calculateSnow(double hours, double initialSnow, double snowFallRate, double meltingRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (i == 0) {
            totalSnow += initialSnow;
        } else {
            totalSnow += snowFallRate - meltingRate;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    double initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << endl;
    return 0;
}