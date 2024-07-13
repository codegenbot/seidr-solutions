#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow -= totalSnow * proportionMeltingPerHour;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;
    
    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);
    cout << fixed << setprecision(10) << result;
    
    return 0;
}