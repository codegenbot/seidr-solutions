int calculateSnow(int hours, float groundSnow, float rateOfSnowFall, float meltingRate) {
    int newSnow = static_cast<int>(groundSnow + (hours * rateOfSnowFall));
    int finalSnow = newSnow;
    
    for(int i=0; i<hours; i++) {
        finalSnow += static_cast<int>(rateOfSnowFall);
        finalSnow -= static_cast<int>(meltingRate);
    }
    
    return finalSnow;
}