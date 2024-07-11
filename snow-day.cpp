#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float melt) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate - melt * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, melt;
    cin >> initialSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, melt);
    return 0;
}