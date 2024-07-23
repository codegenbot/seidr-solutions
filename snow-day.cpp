int main() {
    int hours;
    double totalSnow = 0.0, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 0; i < hours; i++) {
        totalSnow += groundSnow + rateOfSnowFall * totalSnow - proportionOfSnowMeltingPerHour * totalSnow;
    }

    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;

    return 0;
}