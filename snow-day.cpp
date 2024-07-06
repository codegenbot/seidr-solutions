#include <iostream>
using namespace std;
float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
   float current_snow = initial_snow;
   for (int i = 0; i < hours; i++) {
       current_snow += rate_of_snowfall;
       current_snow -= current_snow * proportion_of_melting;
   }
   return current_snow;
}
int main() {
   int hours = 0;
   float initial_snow = 0.0f, rate_of_snowfall = 0.0f, proportion_of_melting = 0.0f;
   cout << "Enter the number of hours: ";
   cin >> hours;
   cout << "Enter the amount of initial snow: ";
   cin >> initial_snow;
   cout << "Enter the rate of snow fall: ";
   cin >> rate_of_snowfall;
   cout << "Enter the proportion of melting per hour: ";
   cin >> proportion_of_melting;
   float remaining_snow = snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting);
   cout << "Remaining snow after " << hours << " hours is: " << remaining_snow << endl;
   return 0;
}