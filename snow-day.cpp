#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double totalSnow = 0;
    for (int i = 1; i <= hours; i++) {
        totalSnow += rate;
        if (totalSnow > groundSnow) {
            double excess = totalSnow - groundSnow;
            totalSnow -= excess;
        } else {
            totalSnow -= melt * groundSnow;
            if (totalSnow < 0) totalSnow = 0;
        }
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