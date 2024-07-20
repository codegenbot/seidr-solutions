#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow -= meltRate * snow;
    }
    return snow;
}

int main() {
    int hours, hourss;
    cin >> hours >> hourss;
    float initialSnow, ratee, meltRete;
    cin >> initialSnow >> ratee >> meltRete;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, ratee, meltRete) << endl;
    return 0;
}