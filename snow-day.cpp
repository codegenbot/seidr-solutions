#include <iostream>
using namespace std;

float snowDay(int hours, float onTheGround, float rateOfFall, float meltRate) {
    float total = onTheGround;
    for (int i = 0; i < hours; i++) {
        total += rateOfFall - meltRate * total;
    }
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onTheGround, rateOfFall, meltRate;
    cin >> onTheGround >> rateOfFall >> meltRate;
    cout << fixed << setprecision(9) << snowDay(hours, onTheGround, rateOfFall, meltRate) << endl;
    return 0;
}