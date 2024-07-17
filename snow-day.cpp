#include <algorithm>

float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        float newSnow = currentSnow + rateOfSnowfall;
        if(newSnow > 0)
            currentSnow = newSnow;
        else
            currentSnow = 0.0f;
        
        if (currentSnow > 0)
            currentSnow -= std::min(currentSnow, meltingRate);
    }
    
    return currentSnow;