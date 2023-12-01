#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float finalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        finalSnow += snowFallRate;
        finalSnow -= finalSnow * meltingRate;
    }
    return finalSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    float result = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << result << endl;
    return 0;
}