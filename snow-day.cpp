#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall - meltingRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, meltingRate;
    cin >> initialSnow >> rateOfSnowfall >> meltingRate;
    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, rateOfSnowfall, meltingRate) << endl;
    return 0;
}