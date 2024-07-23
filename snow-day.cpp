#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    snow_on_ground = snow_on_ground * pow((1 - snow_melt_rate), hours) + (snow_fall_rate / snow_melt_rate) * (1 - pow((1 - snow_melt_rate), hours));

    cout.precision(16);
    cout << fixed << snow_on_ground << endl;
    return 0;
}