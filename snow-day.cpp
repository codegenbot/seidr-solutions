#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateSnow, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateSnow;
        if (totalSnow > groundSnow && meltRate > 0) {
            totalSnow -= min((double)(groundSnow - totalSnow + 1e-6), totalSnow * meltRate);
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateSnow, meltRate;

    cin >> hours >> groundSnow >> rateSnow >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateSnow, meltRate);

    return 0;
}