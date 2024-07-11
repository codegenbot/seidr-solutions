#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float snowFall, float meltRate) {
    float totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall;
        totalSnow -= totalSnow * meltRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFall, meltRate;
    cin >> groundSnow >> snowFall >> meltRate;
    
    cout << fixed << setprecision(9);
    cout << snowDay(hours, groundSnow, snowFall, meltRate) << endl;
    
    return 0;
}