#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float total_snow_added = 0;
    for (int i = 1; i <= hours; ++i) {
        total_snow_added += snow_fall_rate - snow_melt_rate;
        snow_on_ground += total_snow_added;
        if (snow_on_ground < 0) {
            snow_on_ground = 0;
            break;
        }
    }

    cout << snow_on_ground << '\n';

    return 0;
}