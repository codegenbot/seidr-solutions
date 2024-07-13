#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float snowFall, float meltRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall - (meltRate * totalSnow + groundSnow);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFall, meltRate;
    cin >> groundSnow >> snowFall >> meltRate;
    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, snowFall, meltRate);
    
    return 0;
}