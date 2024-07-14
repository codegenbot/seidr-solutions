#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float melt) {
    return initialSnow + rate * hours - melt * hours;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, melt;
    cin >> initialSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, melt) << endl;
    return 0;
}