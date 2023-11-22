#include <iostream>
using namespace std;

float calculateSnow(int hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate);
    cout << result << endl;
    return 0;
}