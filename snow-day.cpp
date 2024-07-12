```c++
#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate - meltPerHour;
    }
    return totalSnow;
}

int main() {
    int hours;
    while (!(cin >> hours)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    float initialSnow, snowFallRate, meltPerHour;
    while (!(cin >> initialSnow >> snowFallRate >> meltPerHour)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltPerHour) << endl;
    return 0;
}