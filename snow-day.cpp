#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow *= (1 - proportionOfMelting);
    }
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfMelting;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfMelting;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMelting);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}