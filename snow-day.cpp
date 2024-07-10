#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateSnowfall, float proportionMelting) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateSnowfall;
        totalSnow -= totalSnow * proportionMelting;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateSnowfall, proportionMelting;
    cin >> groundSnow >> rateSnowfall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateSnowfall, proportionMelting) << endl;
    return 0;
}