#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float total_snow_fallen = hours * snow_fall_rate;
    float total_snow_melted = snow_melt_rate * hours;

    snow_on_ground += total_snow_fallen - total_snow_melted;

    cout << snow_on_ground << '\n';

    return 0;
}