#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        if (rateOfFall > 0.0) {
            totalSnow += rateOfFall;
        }
        if (proportionMelting > 0.0) {
            float snowToMelt = min(totalSnow, initialSnow + rateOfFall * hours - proportionMelting * totalSnow);
            totalSnow -= snowToMelt;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, proportionMelting;
    cin >> initialSnow >> rateOfFall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, proportionMelting) << endl;
    return 0;
}