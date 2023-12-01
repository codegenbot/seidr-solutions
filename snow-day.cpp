#include <iostream>
using namespace std;

float calculateSnow(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowfallRate;
        currentSnow -= currentSnow * meltingRate;
    }
    return currentSnow;
}

int main() {
    int hours;
    float initialSnow, snowfallRate, meltingRate;
    cin >> hours >> initialSnow >> snowfallRate >> meltingRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowfallRate, meltingRate);
    cout << finalSnow << endl;
    
    return 0;
}