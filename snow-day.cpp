#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        if (totalSnow > groundSnow) {
            totalSnow -= (totalSnow - groundSnow);
        } else if (melt != 0) {
            totalSnow -= melt * groundSnow;
            if (totalSnow < 0) {
                totalSnow = 0;
            }
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    cin >> hours >> groundSnow >> rate >> melt;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rate, melt) << endl;

    return 0;
}