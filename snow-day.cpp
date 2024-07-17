#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += groundSnow + rate;
        groundSnow *= (1 - melt);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    cin >> hours >> groundSnow >> rate >> melt;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt);

    return 0;
}