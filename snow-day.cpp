#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float totalSnow = 0;
    
    for(int i = 0; i < hours; i++) {
        if(i == 0) {
            totalSnow += initialSnow;
        } else {
            totalSnow += snowFallRate;
            totalSnow -= meltingRate;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;

    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << endl;

    return 0;
}