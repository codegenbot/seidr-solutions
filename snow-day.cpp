#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double result = 0;
    
    for (int i = 0; i < hours; i++) {
        result += onGround + rate;
        onGround -= onGround * melt / 100.0;
    }
    
    return result;
}

int main() {
    int hours, rateMelt[3];
    float snowRate;
    cin >> hours >> snowRate >> rateMelt[0] >> rateMelt[1];
    cout << setprecision(6) << fixed << snowDay(hours, 0, snowRate, rateMelt[2]) << endl;
    return 0;
}