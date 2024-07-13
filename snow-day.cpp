#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateFall;
        totalSnow -= meltRate * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateFall, meltRate;

    cin >> hours >> groundSnow >> rateFall >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateFall, meltRate);

    return 0;
}