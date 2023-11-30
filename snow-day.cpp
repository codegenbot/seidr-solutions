#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        float meltedSnow = snowFallRate * snowMeltingRate;
        snowOnGround -= meltedSnow;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate) << endl;
    return 0;
}