#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        if (rate > melt * groundSnow) {
            totalSnow += rate - melt * groundSnow;
        } else {
            totalSnow -= melt * groundSnow;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;
}