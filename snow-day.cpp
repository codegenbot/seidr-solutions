#include <iostream>
using namespace std;

float calculateSnowOnGround(int hours, float currentSnow, float snowFall, float meltRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFall;
        currentSnow -= meltRate;
    }
    return currentSnow;
}

int main() {
    int hours;
    float currentSnow, snowFall, meltRate;
    
    cin >> hours >> currentSnow >> snowFall >> meltRate;
    
    float result = calculateSnowOnGround(hours, currentSnow, snowFall, meltRate);
    
    cout << result << endl;
    
    return 0;
}