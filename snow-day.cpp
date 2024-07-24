#include <iostream>
using namespace std;

double snowDay(int hours, double initialSnow, double snowFallRate, double meltingRate) {
    return (initialSnow + snowFallRate * hours - meltingRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    double initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;
    
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltingRate);
    
    return 0;
}