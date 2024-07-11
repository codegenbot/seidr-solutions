#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += groundSnow + rateFall;
        groundSnow *= (1 - meltRate);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, meltRate;
    cin >> groundSnow >> rateFall >> meltRate;
    
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateFall, meltRate);
    
    return 0;
}