#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float net_change_per_hour = snow_fall_rate - (snow_on_ground * snow_melt_rate);
    float final_snow_on_ground = snow_on_ground + (net_change_per_hour * hours);

    cout << final_snow_on_ground << "\n";

    return 0;
}