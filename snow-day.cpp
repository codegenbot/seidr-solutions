#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        totalSnow += rateOfSnowfall;
        if (totalSnow > 0) {
            totalSnow *= (1 - proportionOfMeltingPerHour);
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfMeltingPerHour;
    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}