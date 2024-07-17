#include <iostream>
using namespace std;

float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        currentSnow += rateOfSnowfall;
        
        if (currentSnow > 0)
            currentSnow -= min(rateOfSnowfall, currentSnow * meltingRate);
    }
    
    return currentSnow;
}

int main() {
    int hours;
    cin >> hours;

    float currentSnow, rateOfSnowfall, meltingRate;
    cin >> currentSnow;
    cin >> rateOfSnowfall;
    cin >> meltingRate;

    float totalSnow = snowDay(hours, currentSnow, rateOfSnowfall, meltingRate);

    cout << "Total snow on the ground after " << hours << " hours is " << totalSnow << " cm." << endl;
    
    return 0;
}