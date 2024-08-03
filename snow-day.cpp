#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fall = snow_fall_rate;
        float snow_melt = snow_on_ground * snow_melt_rate;
        snow_on_ground += snow_fall - snow_melt;
    }

    cout << fixed << setprecision(14) << snow_on_ground << '\n';

    return 0;
}