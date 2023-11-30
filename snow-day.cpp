#include <iostream>
using namespace std;

double calculateSnowOnGround(int hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    double snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    double result = calculateSnowOnGround(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << result << endl;
    return 0;
}