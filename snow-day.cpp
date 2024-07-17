#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall - meltingPerHour * groundSnow;
        groundSnow = max(0.0f, groundSnow + rateOfFall - meltingPerHour * groundSnow);
    }
    
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltingPerHour;
    cin >> groundSnow >> rateOfFall >> meltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltingPerHour) << endl;
    return 0;
}