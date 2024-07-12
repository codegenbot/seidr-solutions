#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate - snow_melt_rate;
        snow_on_ground = max(snow_on_ground, 0.0f); // Ensure snow_on_ground doesn't go negative
    }

    cout << snow_on_ground << '\n';

    return 0;
}