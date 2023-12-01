#include <iostream>
using namespace std;

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float snowMeltProportion) {
    float snowAmount = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate - (snowMeltProportion * snowAmount);
    }
    
    return snowAmount;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltProportion;
    
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltProportion;
    
    float result = calculateSnowAmount(hours, initialSnow, snowFallRate, snowMeltProportion);
    cout << result << endl;
    
    return 0;
}