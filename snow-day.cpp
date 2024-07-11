#include <iostream>

int main() {
    int hours;
    float snow_on_ground, rate_of_snow_fall, proportion_of_melting;
    std::cin >> hours >> snow_on_ground >> rate_of_snow_fall >> proportion_of_melting;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += rate_of_snow_fall;
        snow_on_ground -= proportion_of_melting * snow_on_ground;
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}