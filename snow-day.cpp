#include <iostream>
#include <iomanip>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float totalSnow = initialSnow;
    
    for(int i=0; i<hours; i++) {
        totalSnow += snowFallRate - meltingRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;
    
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << endl;
    
    return 0;
}