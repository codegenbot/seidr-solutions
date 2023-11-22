#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    return snowOnGround + (hours * (snowFallRate - (snowOnGround * snowMeltingRate)));
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    
    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate);
    cout << finalSnow << endl;
    
    return 0;
}