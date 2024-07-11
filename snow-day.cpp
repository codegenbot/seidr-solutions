#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float meltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - meltingPerHour;
    }
    totalSnow += initialSnow + rateOfSnowFall * hours - meltingPerHour * hours;
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, meltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> meltingPerHour;
    double result = snowDay(hours, initialSnow, rateOfSnowFall, meltingPerHour);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}