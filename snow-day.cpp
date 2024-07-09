#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall - totalSnow * meltingRate;
        
        if (totalSnow < 0.0f) {
            totalSnow = 0.0f;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfFall, meltingRate;

    cin >> hours >> initialSnow >> rateOfFall >> meltingRate;

    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, rateOfFall, meltingRate);

    return 0;
}