#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float total_snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        total_snow = total_snow + snow_fall_rate - (total_snow * snow_melt_rate);
    }

    cout << fixed << setprecision(15) << total_snow << '\n';

    return 0;
}