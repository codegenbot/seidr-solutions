#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate - meltingRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltingRate);
    
    return 0;
}