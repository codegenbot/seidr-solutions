```cpp
#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = 0.0; // Initialize to zero

    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall; 
        totalSnow -= totalSnow * proportionMeltingPerHour;
    }
    
    totalSnow += initialSnow; 

    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cout << "Enter number of hours: ";
    cin >> hours >> std::endl;
    cout << "Enter initial snow: ";
    cin >> initialSnow >> std::endl;
    cout << "Enter rate of snow fall: ";
    cin >> rateOfSnowfall >> std::endl;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);
    
    cout << "Amount of snow on the ground after " << hours << " hours is: " << result << endl;

    return 0;
}