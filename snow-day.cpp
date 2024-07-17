#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    
    for(int i=0; i<hours; i++) {
        currentSnow += rateOfSnowFall;
        currentSnow -= currentSnow * proportionMeltingPerHour;
        totalSnow = currentSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> currentSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    
    double result = snowDay(hours, currentSnow, rateOfSnowFall, proportionMeltingPerHour);
    cout << fixed << setprecision(6) << result << endl;
    
    return 0;
}