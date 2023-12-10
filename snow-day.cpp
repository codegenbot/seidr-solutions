#include <iostream>
#include <cmath>
using namespace std;
void solve(int hours, float snow_ground, float snow_fall_rate, float snow_melt_rate) {
    float snow = snow_ground + (hours * snow_fall_rate);
    if (snow_melt_rate > 0) {
        float melting_factor = pow(1 - snow_melt_rate, hours);
        snow = snow * melting_factor;
    }
    cout << fixed << setprecision(2) << snow << endl;
}
int main() {
    int hours;
    float snow_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_ground >> snow_fall_rate >> snow_melt_rate;
    solve(hours, snow_ground, snow_fall_rate, snow_melt_rate);
    return 0;
}