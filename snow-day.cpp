#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow -= meltingRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltingRate;
    cin >> initialSnow >> rateOfFall >> meltingRate;
    cout << fixed << setprecision(9);
    cout << snowDay(hours, initialSnow, rateOfFall, meltingRate) << endl;
    return 0;
}