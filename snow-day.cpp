#include <iostream>
using namespace std;

float snowDay(int hours, float snow, float rate, float melt) {
    return (snow + rate * hours - melt * hours);
}

int main() {
    int hours;
    cin >> hours;
    float snow, rate, melt;
    cin >> snow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, snow, rate, melt) << endl;
    return 0;
}