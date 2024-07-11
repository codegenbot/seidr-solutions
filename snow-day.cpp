#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float fallRate, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += fallRate - meltRate;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, fallRate, meltRate;
    cin >> groundSnow >> fallRate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, fallRate, meltRate) << endl;
    return 0;
}