```cpp
float totalSnow = initialSnow;
float result;

for (int i = 0; i < hours; i++) {
    float snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
    totalSnow += snowThisHour > 0 ? snowThisHour : 0; 
}
result = totalSnow;

return result;