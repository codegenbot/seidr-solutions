#include <iostream>
using namespace std;

double snowDay(int hours, double groundSnow, double rate, double melt) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        if (totalSnow > groundSnow) {
            totalSnow -= (totalSnow - groundSnow);
        } else {
            totalSnow -= melt * groundSnow;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    double groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;
}