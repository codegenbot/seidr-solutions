#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        if (rateFall > 0.0) {
            totalSnow += rateFall;
        }
        
        totalSnow -= groundSnow * meltRate;
        
        groundSnow = totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, meltRate;
    cin >> groundSnow >> rateFall >> meltRate;
    
    cout << fixed << setprecision(6);
    cout << snowDay(hours, groundSnow, rateFall, meltRate) << endl;
    
    return 0;
}