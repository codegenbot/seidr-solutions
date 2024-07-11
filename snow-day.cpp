#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float snowfallRate, float meltingRate) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        // add snow
        totalSnow += snowfallRate;
        
        // melt snow
        if (meltingRate > 0.0) {
            float meltedThisHour = min(meltingRate, currentSnow);
            totalSnow -= meltedThisHour;
            currentSnow -= meltedThisHour;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    float currentSnow, snowfallRate, meltingRate;
    cout << "Enter the initial amount of snow (in inches): ";
    cin >> currentSnow;
    cout << "Enter the rate of snow fall per hour (in inches per hour): ";
    cin >> snowfallRate;
    cout << "Enter the proportion of snow that melts per hour: ";
    cin >> meltingRate;
    
    double result = snowDay(hours, currentSnow, snowfallRate, meltingRate);
    cout << "Total snow after " << hours << " hours is: " << fixed << setprecision(6) << result << endl;
    
    return 0;
}