#include <iostream>
using namespace std;

double calculateSnow(int hours, double initialSnow, double rateOfSnowfall, double meltingRate) {
    return initialSnow + rateOfSnowfall * hours - meltingRate * hours;
}

int main() {
    int hours;
    cin >> hours;
    double initialSnow, rateOfSnowfall, meltingRate;
    cin >> initialSnow >> rateOfSnowfall >> meltingRate;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, rateOfSnowfall, meltingRate) << endl;
    return 0;
}