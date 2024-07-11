#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int hours;
    float snow, snow_fall_rate, melt_rate;
    cin >> hours >> snow >> snow_fall_rate >> melt_rate;
    
    for (int i = 0; i < hours; ++i) {
        snow += snow_fall_rate;
        snow -= min(snow, melt_rate);
    }
    
    cout << snow << endl;
    
    return 0;
}