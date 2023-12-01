#include <iostream>
using namespace std;

float calculateSnow(float hours, float currentSnow, float snowFallRate, float snowMeltingRate) {
    float totalSnow = currentSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= totalSnow * snowMeltingRate;
    }
    return totalSnow;
}

int main() {
    float hours, currentSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> currentSnow >> snowFallRate >> snowMeltingRate;
    float result = calculateSnow(hours, currentSnow, snowFallRate, snowMeltingRate);
    cout << result << endl;
    return 0;
}