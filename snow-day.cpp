#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        initialSnow += rateOfSnowfall - proportionOfMelting * initialSnow;
    }
    
    return initialSnow;
}

int main() {
    int hours;
    cin >> hours;

    float initialSnow, rateOfSnowfall, proportionOfMelting;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfMelting;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMelting) << endl;

    return 0;
}