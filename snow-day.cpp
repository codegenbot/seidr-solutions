#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, double initialSnow, double rateOfSnowfall, double proportionMelting) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall; // accumulate snow correctly
        totalSnow *= (1 - proportionMelting); // melt snow correctly
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    double initialSnow, rateOfSnowfall, proportionMelting;
    cin >> initialSnow >> rateOfSnowfall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMelting) << endl;
    return 0;
}