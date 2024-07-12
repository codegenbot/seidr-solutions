#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float snow_fallen = snow_fall_rate;
    float initial_snow_on_ground = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fallen;
        float snow_melted = initial_snow_on_ground * snow_melt_rate;
        snow_on_ground -= snow_melted;
        snow_fallen = snow_fall_rate - snow_melt_rate; 
    }

    cout << snow_on_ground << '\n';

    return 0;
}