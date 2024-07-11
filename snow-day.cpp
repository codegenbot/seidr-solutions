#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        totalSnow += rateFall - meltRate * groundSnow;
        if(totalSnow < 0.0001) {
            break;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, meltRate;
    cin >> groundSnow >> rateFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateFall, meltRate) << endl;
    return 0;
}