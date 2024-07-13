#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateSnowFall, float meltPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateSnowFall - meltPerHour * groundSnow;
        if (totalSnow < 0) {
            totalSnow = 0;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateSnowFall, meltPerHour;
    cin >> groundSnow >> rateSnowFall >> meltPerHour;
    cout << fixed << setprecision(9) << snowDay(hours, groundSnow, rateSnowFall, meltPerHour) << endl;
    return 0;
}