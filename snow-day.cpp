#include <iostream>
using namespace std;

float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    float totalSnow = abs(currentSnow);
    
    for (int i = 0; i < hours; ++i) {
        currentSnow += rateOfSnowfall;
        currentSnow -= meltingRate;
        
        if (currentSnow < 0)
            currentSnow = 0;
        
        totalSnow = fmin(fmax(0.f, currentSnow), 10000.f);
        totalSnow += abs(currentSnow);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    float currentSnow, rateOfSnowfall, meltingRate;
    cout << "Enter current snow (in cm): ";
    cin >> currentSnow;
    cout << "Enter rate of snow fall per hour (cm/h): ";
    cin >> rateOfSnowfall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> meltingRate;

    float totalSnow = snowDay(hours, currentSnow, rateOfSnowfall, meltingRate);

    cout << "Total snow on the ground after " << hours << " hours is " << totalSnow << " cm." << endl;
    
    return 0;
}