#include <iostream>
using namespace std;

double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltingRate) {
    double snowAmount = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate;
        snowAmount -= snowAmount * meltingRate;
    }
    
    return snowAmount;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltingRate;
    
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    double finalSnowAmount = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
    
    cout << finalSnowAmount << endl;
    
    return 0;
}