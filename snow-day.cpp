#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowMeltingRate * snowOnGround;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    
    float result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate);
    cout << result << endl;
    
    return 0;
}