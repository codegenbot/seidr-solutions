#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += groundSnow + rateOfFall;
        groundSnow *= (1 - meltingRate);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfFall, meltingRate;

    cin >> hours >> groundSnow >> rateOfFall >> meltingRate;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltingRate);

    return 0;
}