#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall - meltRate * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;

    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;

    return 0;
}