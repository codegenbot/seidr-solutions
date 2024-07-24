#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float groundSnow, snowFallRate, snowMeltingRate;

    std::cin >> hours >> groundSnow >> snowFallRate >> snowMeltingRate;

    for(int i = 0; i < hours; i++) {
        groundSnow += snowFallRate - snowMeltingRate;
    }

    cout << "The amount of snow on the ground after " << hours << " hours is: " 
         << fixed << setprecision(2) << groundSnow << endl;

    return 0;
}