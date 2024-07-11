#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    float totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > groundSnow) {
            float excess = totalSnow - groundSnow;
            totalSnow -= excess;
            while (excess > 0.0) {
                excess -= meltRate;
                if (excess <= 0.0) break;
                totalSnow--;
            }
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltRate;
    cin >> groundSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltRate) << endl;
    return 0;
}