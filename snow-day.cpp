```cpp
#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowfall > 0) {
            totalSnow += rateOfSnowfall;
        }
        if (meltingRate > 0) {
            totalSnow -= totalSnow * meltingRate;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, meltingRate;
    cin >> initialSnow >> rateOfSnowfall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, meltingRate) << endl;
    return 0;
}