#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double snow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += rate;
        if (snow > 0.0) {
            snow -= snow * melt;
        }
    }
    
    return snow;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    cin >> hours >> groundSnow >> rate >> melt;

    cout << fixed << std::setprecision(10);
    cout << snowDay(hours, groundSnow, rate, melt) << endl;

    return 0;
}