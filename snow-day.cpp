#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFall, float meltingRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall - meltingRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFall, meltingRate;
    cin >> initialSnow >> snowFall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFall, meltingRate) << endl;
    return 0;
}