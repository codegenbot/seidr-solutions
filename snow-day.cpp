#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float snowfallRate, float meltingRate) {
    return groundSnow + (snowfallRate * hours - meltingRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowfallRate, meltingRate;
    cin >> groundSnow >> snowfallRate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, snowfallRate, meltingRate) << endl;
    return 0;
}