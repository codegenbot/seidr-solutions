#include <iostream>
#include <iomanip> 
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double totalSnow = initialSnow + (rate * hours);
    return totalSnow - ((meltRate * hours) * initialSnow + (meltRate * rate * hours));
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, meltRate;
    cin >> initialSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, meltRate) << endl;
    return 0;
}