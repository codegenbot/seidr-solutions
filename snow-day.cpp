```cpp
float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    return (initialSnow + rateOfSnowfall * hours) - proportionMeltingPerHour * hours;
}