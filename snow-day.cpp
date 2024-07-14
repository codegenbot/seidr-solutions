#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double result = 0.0;
    
    for (int i = 0; i < hours; i++) {
        result += rate - melt;
    }
    
    return min(result + groundSnow, 100.0);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt);

    return 0;
}