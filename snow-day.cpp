#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float net_change_per_hour = snow_fall_rate - snow_melt_rate;
    float total_net_change = hours * net_change_per_hour;

    snow_on_ground += total_net_change;

    cout << snow_on_ground << "\n";

    return 0;
}