double totalSnow = 0;

int hours;
std::cin >> hours;

double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
std::cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

for (int i = 0; i < hours; ++i) {
    totalSnow += (rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow);
}

std::cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;