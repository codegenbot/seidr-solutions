#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double result = onGround;
    
    for (int i = 0; i < hours; ++i) {
        result += rate; // add new snow
        if (result > 0) { // prevent melting below zero
            result -= result * melt;
        }
    }
    
    return result;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    
    cout << fixed << setprecision(6) << snowDay(hours, onGround, rate, melt) << endl;

    return 0;
}