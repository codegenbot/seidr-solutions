#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > 0) {
            totalSnow -= meltingRate * totalSnow;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltingRate;
    cin >> initialSnow >> rateOfFall >> meltingRate;
    double result = snowDay(hours, initialSnow, rateOfFall, meltingRate);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}