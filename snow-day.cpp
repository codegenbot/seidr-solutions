#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;  

    double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour; 
    cout << "Enter the total amount of snow initially (in feet): ";
    cin >> initialSnow;

    cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    cin >> rateOfSnowFall;

    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    double totalSnow = initialSnow;  // Declare and initialize totalSnow

    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow;
    }
    
    cout << fixed << setprecision(10);  
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << endl;
    return 0;
}