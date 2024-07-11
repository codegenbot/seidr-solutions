#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfFall, float meltingPerHour) {
    double totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow -= meltingPerHour * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltingPerHour;
    cin >> groundSnow >> rateOfFall >> meltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltingPerHour) << endl;
    
    return 0;
}