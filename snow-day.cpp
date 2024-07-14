#include <iostream>
using namespace std;

float calculateSnow(float groundSnow, float rateOfSnowfall, float proportionMelting) {
    return groundSnow + rateOfSnowfall - (proportionMelting * rateOfSnowfall);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow;
    cin >> groundSnow;
    float rateOfSnowfall;
    cin >> rateOfSnowfall;
    float proportionMelting;
    cin >> proportionMelting;

    for(int i = 0; i < hours; i++) {
        groundSnow = calculateSnow(groundSnow, rateOfSnowfall, proportionMelting);
    }

    cout << fixed << setprecision(9) << groundSnow << endl;

    return 0;
}