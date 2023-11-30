#include <iostream>
#include <iomanip>

using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;

    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate);
    cout << fixed << setprecision(16) << finalSnow << endl;

    return 0;
}