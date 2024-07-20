#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowfall > 0) {
            totalSnow += rateOfSnowfall;
        }
        
        if (proportionMeltingPerHour > 0 && initialSnow > 0) {
            initialSnow -= initialSnow * proportionMeltingPerHour / 100.0;
        }
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
    return 0;
}