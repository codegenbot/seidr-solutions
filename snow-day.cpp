#include <iostream>
using namespace std;

double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double snowMeltingRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= snowMeltingRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    double result = calculateSnowAmount(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << result << endl;
    return 0;
}