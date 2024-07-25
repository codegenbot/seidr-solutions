#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        totalSnow -= meltRate * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, meltRate;
    cin >> initialSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, meltRate) << endl;
    return 0;
}