#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFall, float meltRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall - meltRate;
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFall, meltRate;
    cin >> initialSnow >> snowFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFall, meltRate) << endl;
    
    return 0;
}