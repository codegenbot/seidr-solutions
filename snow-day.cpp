#include <iostream>
using namespace std;

float calculateSnow(float initialSnow, float snowfallRate, float meltingRate, int hours) {
    float calculatedSnow = initialSnow;
    
    for(int i=0; i<hours; i++) {
        calculatedSnow += snowfallRate;
        calculatedSnow -= min(calculatedSnow, meltingRate);
    }
    
    return calculatedSnow;
}

int main() {
    int hours;
    cin >> hours;

    float initialSnow, snowfallRate, meltingRate;
    cin >> initialSnow >> snowfallRate >> meltingRate;

    float calculatedSnow = calculateSnow(initialSnow, snowfallRate, meltingRate, hours);

    cout << fixed << setprecision(2) << calculatedSnow << endl;

    return 0;
}