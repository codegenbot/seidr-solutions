#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (initialSnow > 0.0) {
            totalSnow += rateOfSnowFall;
        }
        
        initialSnow -= rateOfSnowFall * proportionOfSnowMeltingPerHour;
        
        if (initialSnow < 0.0) {
            initialSnow = 0.0;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    cout << fixed;
    cout.precision(9);
    cout << result << endl;

    return 0;
}