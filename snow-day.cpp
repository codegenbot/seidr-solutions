#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = round(snow_on_ground + snow_fall_rate - snow_melt_rate * snow_on_ground, 15);
    }

    cout << fixed << setprecision(15) << snow_on_ground << endl;

    return 0;
}