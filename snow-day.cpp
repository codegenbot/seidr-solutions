#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate; // Add new snow
    }

    float total_melted_snow = snow_on_ground * snow_melt_rate; // Calculate total amount of snow melting
    float final_snow_on_ground = snow_on_ground - total_melted_snow; // Update final snow on the ground after melting

    cout << final_snow_on_ground << "\n";

    return 0;
}