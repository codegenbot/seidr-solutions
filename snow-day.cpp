#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double result = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        result += rate;
        if (result > 0.0)
            result -= result * melt / 100.0;
    }
    
    return result;
}

int main() {
    int hours;
    float groundSnow, rate, melt;
    cin >> hours >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt);
    return 0;
}