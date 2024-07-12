#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, float groundSnow, float rateSnow, float meltRate) {
    double totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateSnow;
        if (meltRate > 0) {
            totalSnow -= totalSnow * meltRate / 100.0;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateSnow, meltRate;
    cin >> groundSnow >> rateSnow >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateSnow, meltRate) << endl;
    return 0;
}