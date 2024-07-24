#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = snow_on_ground + snow_fall_rate - snow_melt_rate * snow_on_ground;
    }

    cout << snow_on_ground << endl;

    return 0;
}