#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float total_snow_fall = snow_fall_rate * (1 - snow_melt_rate);
    float final_snow_on_ground = snow_on_ground + total_snow_fall * (1 - pow(snow_melt_rate, hours));

    cout << fixed << final_snow_on_ground << '\n';

    return 0;
}