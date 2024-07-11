#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fallen = snow_fall_rate;
        float snow_remaining = snow_on_ground + snow_fallen;
        float snow_melted = snow_remaining * snow_melt_rate;
        snow_on_ground = snow_remaining - snow_melted;
    }

    cout << snow_on_ground << '\n';

    return 0;
}