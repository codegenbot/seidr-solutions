#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double snow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += rate;
        if (melt > 0.0) {
            snow -= min(snow, melt);
        }
    }
    
    return snow;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    cin >> hours >> groundSnow >> rate >> melt;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt);

    return 0;
}