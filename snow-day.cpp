#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float rateMelt) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateFall - rateMelt;
    }
    
    return totalSnow + groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, rateMelt;
    cin >> groundSnow >> rateFall >> rateMelt;

    double result = snowDay(hours, groundSnow, rateFall, rateMelt);
    
    cout << fixed << setprecision(6) << result << endl;

    return 0;
}