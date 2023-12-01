#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rate, float meltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate - meltingRate * snow;
    }
    return snow;
}

int main() {
    float hours, initialSnow, rate, meltingRate;
    cin >> hours >> initialSnow >> rate >> meltingRate;
    cout << calculateSnow(hours, initialSnow, rate, meltingRate) << endl;
    return 0;
}