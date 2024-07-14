#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall - meltingRate * groundSnow;
        if (totalSnow < 0)
            totalSnow = 0;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfFall, meltingRate;

    cin >> hours >> groundSnow >> rateOfFall >> meltingRate;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rateOfFall, meltingRate) << endl;

    return 0;
}