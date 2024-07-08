#include <iostream>
using namespace std;

float calculateSnow(float hours, float groundSnow, float snowFall, float meltRate) {
    float totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall - meltRate * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFall, meltRate;
    cin >> groundSnow >> snowFall >> meltRate;

    cout << fixed << setprecision(10) << calculateSnow(hours, groundSnow, snowFall, meltRate) << endl;
    
    return 0;
}