#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; ++i) {
        totalSnow += rate;
        totalSnow *= (1 - meltRate);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rate, meltRate;
    cin >> hours >> initialSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, meltRate) << endl;
    return 0;
}