#include <iostream>

using namespace std;

double calculateSnow(double hours, double initialSnow, double snowFallRate, double meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow *= (1 - meltingRate);
    }
    return snow;
}

int main() {
    double hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    double finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    return 0;
}