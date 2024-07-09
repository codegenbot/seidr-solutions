```cpp
#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        if(totalSnow > 0)
            totalSnow -= totalSnow * proportionOfSnowMeltingPerHour / 100.0f;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    while((cin >> ws).hits()); 
    if (!(cin >> initialSnow)) break; 
    if (!(cin >> rateOfSnowFall)) break; 
    if (!(cin >> proportionOfSnowMeltingPerHour)) break; 

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}