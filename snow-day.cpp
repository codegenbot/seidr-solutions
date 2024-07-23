#include <iostream>
#include <cmath> // Include the <cmath> header for the round function
using namespace std;

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = round((snow_on_ground + snow_fall_rate) - (round(snow_on_ground * snow_melt_rate)));
    }

    cout.precision(16);
    cout << fixed << snow_on_ground << endl;
    return 0;
}