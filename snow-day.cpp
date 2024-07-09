#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > initialSnow) {
            totalSnow -= (totalSnow - initialSnow);
        }
        totalSnow *= (1 - meltingRate);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfFall, meltingRate;

    cin >> hours >> initialSnow >> rateOfFall >> meltingRate;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltingRate);

    return 0;
}