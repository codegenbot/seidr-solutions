#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float temp_snow_on_ground = snow_on_ground + snow_fall_rate - (snow_melt_rate * (snow_on_ground + snow_fall_rate));
        snow_on_ground = temp_snow_on_ground;
    }

    cout << setprecision(15) << snow_on_ground << '\n';

    return 0;
}