#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float newly_added_snow = snow_fall_rate; // Calculate amount of new snow added in the current hour
        float melted_snow = (snow_on_ground + newly_added_snow) * snow_melt_rate; // Calculate amount of snow melting
        snow_on_ground += newly_added_snow - melted_snow; // Update snow amount on the ground
    }

    cout << snow_on_ground << "\n";

    return 0;
}