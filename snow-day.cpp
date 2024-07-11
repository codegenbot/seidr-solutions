#include <iostream>
using namespace std;

double calculateSnow(int hours, float initialSnow, float rateOfSnowFall, float proportionOfMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= totalSnow * proportionOfMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfMeltingPerHour;

    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, rateOfSnowFall, proportionOfMeltingPerHour) << endl;

    return 0;
}