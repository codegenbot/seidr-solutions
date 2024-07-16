#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    // calculate new snowfall before entering the loop
    float newSnow = rateOfSnowFall;
    
    for (int i = 0; i < hours; i++) {
        totalSnow *= (1 - proportionOfSnowMeltingPerHour); 
        totalSnow += newSnow; 
        newSnow = rateOfSnowFall; 
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << static_cast<double>(snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour)) << endl;

    return 0;
}