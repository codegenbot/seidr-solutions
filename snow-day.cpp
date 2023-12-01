#include <iostream>
using namespace std;

double calculateSnowAmount(int hours, double initialSnow, double snowRate, double meltRate) {
    double snowAmount = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowAmount += snowRate;
        snowAmount -= snowAmount * meltRate;
    }
    return snowAmount;
}

int main() {
    int hours;
    double initialSnow, snowRate, meltRate;

    cin >> hours >> initialSnow >> snowRate >> meltRate;

    double finalSnowAmount = calculateSnowAmount(hours, initialSnow, snowRate, meltRate);

    cout << finalSnowAmount << endl;

    return 0;
}