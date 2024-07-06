#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow *= (1 - proportionMeltingPerHour);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    return 0;
}