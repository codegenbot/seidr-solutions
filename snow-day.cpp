#include <iostream>
using namespace std;

double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltingRate) {
    double currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * meltingRate / 100;
    }
    return currentSnow;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    double finalSnow = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    return 0;
}