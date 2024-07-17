#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow *= (1 - proportionMeltingPerHour);
    }
    return totalSnow;
}

int main() {
    int hours, rateOfSnowfall, proportionMeltingPerHour;
    cin >> hours >> rateOfSnowfall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, 0.0, rateOfSnowfall, proportionMeltingPerHour) << endl;
    return 0;
}