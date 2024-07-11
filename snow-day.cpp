#include <iostream>
using namespace std;

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate; // Add new snow
        double melted_snow = snow_on_ground * snow_melt_rate; // Calculate snow melting this hour
        snow_on_ground -= melted_snow; // Update snow on the ground after melting
    }

    cout << snow_on_ground << "\n";

    return 0;
}