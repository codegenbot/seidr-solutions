#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rate, float melt) {
    return initialSnow + (hours * rate) - (melt * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, melt;
    cin >> initialSnow >> rate >> melt;

    cout << fixed << setprecision(6);
    cout << snowDay(hours, initialSnow, rate, melt);

    return 0;
}