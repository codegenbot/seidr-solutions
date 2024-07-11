#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateSnowfall, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateSnowfall;
        if (meltRate > 0.0) {
            totalSnow -= totalSnow * meltRate / 100.0;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateSnowfall, meltRate;
    cin >> groundSnow >> rateSnowfall >> meltRate;
    double result = snowDay(hours, groundSnow, rateSnowfall, meltRate);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}