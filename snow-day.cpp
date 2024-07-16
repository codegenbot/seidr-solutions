#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        if (proportionMeltingPerHour > 0.0) {
            totalSnow -= totalSnow * proportionMeltingPerHour / 100.0;
        }
    }
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    return 0;
}