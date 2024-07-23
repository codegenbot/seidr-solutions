#include <iostream>
using namespace std;

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        double snow_fallen = snow_fall_rate - (snow_on_ground * snow_melt_rate);
        snow_on_ground = snow_on_ground + snow_fallen;
    }

    cout << fixed << snow_on_ground << endl;
    return 0;
}