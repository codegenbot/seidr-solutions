#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; ++i) {
        totalSnow += rateOfFall;
        if (totalSnow > groundSnow) {
            totalSnow = groundSnow;
        } else {
            totalSnow -= totalSnow * meltRate;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfFall, meltRate;
    
    cin >> hours >> groundSnow >> rateOfFall >> meltRate;
    
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltRate);
    
    return 0;
}