#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - meltRate);
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;
    
    // Calculate snow after each hour, taking into account snowfall and melting rate
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - meltRate);
    }
    
    cout << snowOnGround << endl;
    
    return 0;
}