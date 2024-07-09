#include <iostream>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowfall - meltingRate;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, meltingRate;
    cin >> initialSnow >> rateOfSnowfall >> meltingRate;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, meltingRate);

    cout << fixed << setprecision(10) << result << endl; // 10 is the number of decimal places

    return 0;
}