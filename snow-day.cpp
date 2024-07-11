#include <iostream>
using namespace std;

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        double melted_snow = snow_on_ground * snow_melt_rate;
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= melted_snow;
    }

    cout << snow_on_ground << "\n";

    return 0;
}