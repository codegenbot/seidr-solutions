#include <iostream>
#include <iomanip> 
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double snow = initialSnow + (rate * hours);
    snow -= meltRate * hours * initialSnow + meltRate * rate * hours;
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, meltRate;
    cin >> initialSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, meltRate) << endl;
    return 0;
}