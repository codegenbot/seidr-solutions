#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    float updated_snow;
    for (int i = 0; i < hours; ++i) {
        updated_snow = snow_on_ground + snow_fall_rate - (snow_melt_rate * snow_on_ground);
        snow_on_ground = updated_snow;
    }

    cout << fixed << setprecision(15) << updated_snow << '\n';

    return 0;
}