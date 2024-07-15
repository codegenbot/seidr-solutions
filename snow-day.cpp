#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    snow_on_ground += hours * snow_fall_rate;
    snow_on_ground += hours * (snow_fall_rate - snow_fall_rate * snow_melt_rate);

    cout << snow_on_ground << endl;

    return 0;
}