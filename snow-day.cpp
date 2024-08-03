#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = roundf((snow_on_ground + snow_fall_rate - snow_on_ground * snow_melt_rate) * 1000000000000000) / 1000000000000000;
    }

    cout << snow_on_ground << '\n';

    return 0;
}