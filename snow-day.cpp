#include <iostream>
using namespace std;

float calculateSnow(float snow, float rate, float melt, int hours) {
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow -= snow * melt;
    }
    return snow;
}

int main() {
    int hours;
    float snow, rate, melt;
    
    cin >> hours >> snow >> rate >> melt;
    float result = calculateSnow(snow, rate, melt, hours);
    cout << result << endl;
    
    return 0;
}