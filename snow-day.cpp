#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float rateMelt) {
    double totalSnow = 0.0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateFall;
        totalSnow -= rateMelt * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, rateMelt;
    cin >> groundSnow >> rateFall >> rateMelt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateFall, rateMelt);
    return 0;
}