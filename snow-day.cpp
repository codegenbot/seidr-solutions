#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float initial_snow = snow_on_ground;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = initial_snow + i * snow_fall_rate - i * snow_melt_rate * snow_fall_rate;
    }

    cout << snow_on_ground << "\n";

    return 0;
}