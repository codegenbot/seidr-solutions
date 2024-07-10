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

    double rateOfSnowFall = 0.0;
    cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    cin >> rateOfSnowFall;

    double proportionOfSnowMeltingPerHour = 0.0;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    totalSnow = initialSnow;  

    for (int i = 0; i < hours; i++) {
        double newSnow = rateOfSnowFall;
        totalSnow += newSnow - proportionOfSnowMeltingPerHour * totalSnow;
    }
    
    cout << fixed << setprecision(10);  
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << endl;
    return 0;
}