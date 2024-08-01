#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    double current_snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        current_snow = current_snow + snow_fall_rate - (static_cast<double>(snow_melt_rate) * static_cast<double>(current_snow));
    }

    cout << fixed << setprecision(10) << current_snow << endl;

    return 0;
}