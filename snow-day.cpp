#include <iostream>
using namespace std;

double calculateSnow(int hours, float initialSnow, float snowFall, float meltRate) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall - totalSnow * meltRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFall, meltRate;
    cin >> initialSnow >> snowFall >> meltRate;

    double result = calculateSnow(hours, initialSnow, snowFall, meltRate);

    cout << fixed << setprecision(10);
    cout << result << endl;
    
    return 0;
}