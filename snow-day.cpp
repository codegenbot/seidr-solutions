#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall - (proportionOfMelting * totalSnow);
    }
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfMelting;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfMelting;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMelting);

    return 0;
}