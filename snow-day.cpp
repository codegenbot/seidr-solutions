#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall - meltingRate * totalSnow;
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