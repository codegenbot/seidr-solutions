int snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall / 100.0;
        
        if (totalSnow > 0)
            totalSnow -= totalSnow * meltRate / 100.0;
            
        else 
            return 0; // stop the loop and return when snow is melted
    }
    
    return totalSnow;
}