#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0) {
            totalSnow += rateOfSnowFall;
        }
        totalSnow *= (1 - proportionMeltingPerHour);
    }
    return initialSnow + totalSnow;
}

int main() {
    int hours, initialSnow = 0;
    float rateOfSnowFall, proportionMeltingPerHour;
    
    cin >> hours >> rateOfSnowFall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour) << endl;
    
    return 0;
}