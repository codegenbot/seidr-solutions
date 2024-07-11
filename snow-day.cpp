#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float final_snow_on_ground = snow_on_ground; // Reset final snow on ground
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate - snow_melt_rate; // Update snow on ground considering fall and melt rates
        final_snow_on_ground = snow_on_ground; // Update final snow on ground after each hour
    }

    cout << final_snow_on_ground << "\n";

    return 0;
}