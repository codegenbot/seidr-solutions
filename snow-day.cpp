#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    float totalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= totalSnow * snowMeltingRate;
    }
    return totalSnow;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate);
    cout << result << endl;
    return 0;
}