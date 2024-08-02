#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return groundSnow + (rate * hours - (melt * hours));
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, rate, melt);
    return 0;
}