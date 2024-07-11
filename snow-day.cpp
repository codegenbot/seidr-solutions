#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate; // Add new snow
        float melted_snow = snow_on_ground * snow_melt_rate; // Calculate amount of snow melting
        snow_on_ground = snow_on_ground + snow_fall_rate - melted_snow; // Update snow on the ground after melting
    }

    cout << fixed << showpoint << snow_on_ground << endl;

    return 0;
}