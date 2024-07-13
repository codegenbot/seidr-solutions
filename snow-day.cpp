#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowfall > 0) {
            totalSnow += rateOfSnowfall;
        }
        
        if (proportionOfMeltingPerHour > 0 && initialSnow > 0) {
            initialSnow -= initialSnow * proportionOfMeltingPerHour / 100.0;
        }
    }

    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour) << endl;
    
    return 0;
}