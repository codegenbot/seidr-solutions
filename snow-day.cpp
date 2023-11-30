#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate;
        initialSnow -= initialSnow * meltingRate;
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    return 0;
}