#include <iostream>
using namespace std;

int calculateSnow(int hours, int initialSnow, float snowFallRate, float meltingRate) {
    int snow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= int(snow * meltingRate);
    }
    
    return snow;
}

int main() {
    int hours, initialSnow;
    float snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    int finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    
    return 0;
}