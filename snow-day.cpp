#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float current_snow;
    for (int i = 0; i < hours; ++i) {
        current_snow += snow_fall_rate;
        snow_on_ground = current_snow - (current_snow * snow_melt_rate);
    }

    cout << snow_on_ground << endl;

    return 0;
}