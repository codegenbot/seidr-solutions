#include <iostream>

using namespace std;

double snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - totalSnow * proportionOfMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionOfMeltingPerHour;

    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfMeltingPerHour;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, snowOnGround, rateOfSnowFall, proportionOfMeltingPerHour) << endl;
    
    return 0;
}