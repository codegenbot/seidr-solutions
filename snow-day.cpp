#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double total = onGround;
    
    for (int i = 0; i < hours; i++) {
        total += rate;
        if (total > 0)
            total -= total * melt;
    }
    
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}