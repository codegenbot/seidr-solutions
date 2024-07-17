#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return round((groundSnow + (rate * hours)) * (1 - pow(melt, hours)));
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;
}