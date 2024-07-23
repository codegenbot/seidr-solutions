#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double result = onGround;
    for (int i = 0; i < hours; i++) {
        result += rate;
        if (melt > 0.0) {
            result -= min(result, melt);
        }
    }
    return result;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}