#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        if (totalSnow > groundSnow) {
            totalSnow -= (totalSnow - groundSnow);
        } else {
            totalSnow -= melt * totalSnow;
            if (totalSnow < 0) {
                totalSnow = 0;
            }
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