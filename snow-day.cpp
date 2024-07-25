#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    return (initialSnow + hours * snowFallRate - meltingRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltingRate) << endl;
    return 0;
}