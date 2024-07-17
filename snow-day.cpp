#include <iostream>
using namespace std;

double snowDay(int hours, double currentSnow, double rateOfSnowfall, double meltingRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; ++i) {
        currentSnow += rateOfSnowfall - meltingRate;
        if (currentSnow < 0)
            currentSnow = 0;
        
        totalSnow += currentSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    double currentSnow, rateOfSnowfall, meltingRate;
    cout << "Enter current snow (in cm): ";
    cin >> currentSnow;
    cout << "Enter rate of snow fall per hour (cm/h): ";
    cin >> rateOfSnowfall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> meltingRate;

    double totalSnow = snowDay(hours, currentSnow, rateOfSnowfall, meltingRate);

    cout << "Total snow on the ground after " << hours << " hours is " << totalSnow << " cm." << endl;
    
    return 0;
}