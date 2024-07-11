#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fallen = snow_fall_rate - snow_melt_rate * snow_on_ground;
        float snow_melted = snow_on_ground * snow_melt_rate;
        snow_on_ground += snow_fallen - snow_melted;
    }

    cout << snow_on_ground << '\n';

    return 0;
}