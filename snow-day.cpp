#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_added = snow_fall_rate - snow_melt_rate;
        snow_on_ground += (snow_added > 0) ? snow_added : 0.0f; // Add snow only if positive
    }

    cout << fixed << snow_on_ground << '\n'; // Output the updated snow_on_ground

    return 0;
}