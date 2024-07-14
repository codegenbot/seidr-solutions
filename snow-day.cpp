#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, float currentSnow, float snowFallRate, float meltRate) {
    double totalSnow = currentSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate - meltRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, snowFallRate, meltRate;
    cin >> currentSnow >> snowFallRate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, snowFallRate, meltRate) << endl;
    
    return 0;
}