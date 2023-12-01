#include <iostream>
using namespace std;

float calculateSnow(float hours, float currentSnow, float snowFall, float meltRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFall;
        currentSnow -= currentSnow * meltRate;
    }
    return currentSnow;
}

int main() {
    float hours, currentSnow, snowFall, meltRate;
    cin >> hours >> currentSnow >> snowFall >> meltRate;
    cout << calculateSnow(hours, currentSnow, snowFall, meltRate) << endl;
    return 0;
}