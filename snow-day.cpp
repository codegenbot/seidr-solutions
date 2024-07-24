#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    return round((groundSnow + (rateOfFall * hours)) - ((meltRate * hours) * (groundSnow + (rateOfFall * hours)))));
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltRate;
    cin >> groundSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rateOfFall, meltRate) << endl;
    return 0;
}