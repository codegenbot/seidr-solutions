#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float snowFall, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall;
        totalSnow *= (1 - meltRate);
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFall, meltRate;
    cin >> groundSnow >> snowFall >> meltRate;
    double result = snowDay(hours, groundSnow, snowFall, meltRate);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}