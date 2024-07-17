#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > 0) {
            totalSnow -= meltRate * totalSnow;
        }
    }
    
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;
    return 0;
}