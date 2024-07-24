#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float fallRate, float meltRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; ++i) {
        totalSnow += fallRate - meltRate;
    }
    
    return totalSnow + onGround;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, fallRate, meltRate;
    cin >> onGround >> fallRate >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, onGround, fallRate, meltRate);

    return 0;
}