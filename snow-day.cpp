#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    // Add snow for each hour and then melt it
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionMeltingPerHour);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);

    cout << fixed << setprecision(10);
    cout << result << endl;

    return 0;
}