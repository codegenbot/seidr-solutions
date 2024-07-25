#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowfallRate, float meltingRate) {
    float totalSnow = initialSnow;
    for(int i=0; i<hours; i++) {
        totalSnow += snowfallRate;
        if(totalSnow > 0)
            totalSnow -= meltingRate * (totalSnow > 0);
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowfallRate, meltingRate;
    cin >> initialSnow >> snowfallRate >> meltingRate;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowfallRate, meltingRate) << endl;
    return 0;
}