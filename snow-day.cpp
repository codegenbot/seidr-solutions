#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    
    double initialSnow;
    cout << "Enter the total amount of snow initially (in feet): ";
    cin >> initialSnow;
    
    double rateOfSnowFall;
    cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    cin >> rateOfSnowFall;
    
    double proportionOfSnowMeltingPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    double totalSnow = 0;  // Initialize with 0

    double snowAccumulation = initialSnow;

    for (int i = 0; i < hours; i++) {
        initialSnow = snowAccumulation;
        snowAccumulation += rateOfSnowFall - proportionOfSnowMeltingPerHour * initialSnow;
    }
    
    cout << fixed << setprecision(5);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << snowAccumulation << " ft" << endl;
    return 0;
}