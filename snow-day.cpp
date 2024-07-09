#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (i > 0) {
            totalSnow -= initialSnow * proportionOfMeltingPerHour;
        }
        initialSnow += rateOfSnowfall;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour) << endl;
    return 0;