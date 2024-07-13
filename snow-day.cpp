#include <iostream>
using namespace std;

double calculateSnow(float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour, int hours) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionMeltingPerHour * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;
    int hours;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << calculateSnow(initialSnow, rateOfSnowFall, proportionMeltingPerHour, hours) << endl;

    return 0;
}