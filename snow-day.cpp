#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateFall;
        groundSnow = groundSnow + rateFall - (groundSnow * meltRate);
    }
    return fixed << setprecision(10) << groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, meltRate;
    cin >> groundSnow >> rateFall >> meltRate;
    cout << snowDay(hours, groundSnow, rateFall, meltRate) << endl;
    return 0;
}