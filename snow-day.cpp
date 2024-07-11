#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfMeltingPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        totalSnow += rateOfSnowFall - proportionOfMeltingPerHour * groundSnow;
        groundSnow = max(0.0f, groundSnow + rateOfSnowFall - proportionOfMeltingPerHour * groundSnow);
    }
    return groundSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionOfMeltingPerHour;
    
    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfMeltingPerHour;
    
    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfMeltingPerHour) << endl;

    return 0;
}