```cpp
#include <iostream>
#include <iomanip>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    return initialSnow + (hours * snowFallRate) - (hours * meltingRate);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << endl;
    return 0;
}