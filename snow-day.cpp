#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (meltingRate > 0.0) {
            totalSnow -= min(totalSnow, meltingRate);
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltingRate;
    cin >> groundSnow >> rateOfFall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltingRate) << endl;
    
    return 0;
}