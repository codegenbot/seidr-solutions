#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfFall, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += currentSnow + rateOfFall - meltRate * currentSnow;
        currentSnow = fmin(currentSnow + rateOfFall - meltRate * currentSnow, 10000.0); // max snow is 10,000
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfFall, meltRate;
    cin >> currentSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(6) << snowDay(hours, currentSnow, rateOfFall, meltRate) << endl;
    return 0;
}