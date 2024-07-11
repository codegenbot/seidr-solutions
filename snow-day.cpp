#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        groundSnow += rate;
        groundSnow -= groundSnow * melt;
        totalSnow = groundSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;
}