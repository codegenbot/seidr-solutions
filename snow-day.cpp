#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    double totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateFall;
        totalSnow -= meltRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, meltRate;
    cin >> groundSnow >> rateFall >> meltRate;
    
    double result = snowDay(hours, groundSnow, rateFall, meltRate);
    cout << fixed << setprecision(6) << result << endl;

    return 0;
}