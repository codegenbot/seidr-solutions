#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    return round((groundSnow + (rateOfFall * hours)) - ((meltingRate * hours) * (groundSnow + (rateOfFall * hours)))));
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltingRate;
    cin >> groundSnow >> rateOfFall >> meltingRate;
    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rateOfFall, meltingRate) << endl;
    return 0;
}