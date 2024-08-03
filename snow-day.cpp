#include <iostream>
#include <cmath>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    snow_on_ground = snow_on_ground + hours * snow_fall_rate - snow_on_ground * (1 - snow_melting_rate) * (1 - std::pow(1 - snow_fall_rate / (1 - snow_melting_rate), hours));
  
    std::cout << snow_on_ground << std::endl;

    return 0;
}