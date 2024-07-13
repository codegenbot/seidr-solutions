#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfFall - meltingRate * groundSnow;
    }
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltingRate;
    cin >> groundSnow >> rateOfFall >> meltingRate;
    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, rateOfFall, meltingRate);
    return 0;
}