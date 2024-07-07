#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, double groundSnow, double rate, double melt) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        groundSnow += rate;
        totalSnow += rate - melt * groundSnow;
        groundSnow = max(0.0, groundSnow - melt);
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