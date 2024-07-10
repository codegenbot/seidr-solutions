#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (i == 0) {
            totalSnow += initialSnow;
        } else {
            totalSnow += snowfallRate - meltingRate;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowfallRate, meltingRate;
    cin >> initialSnow >> snowfallRate >> meltingRate;
    
    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, snowfallRate, meltingRate) << endl;

    return 0;
}