def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall  
        snow = max(0, snow)   
        snow -= min(snow, melt_rate)  
    return round(snow, 6)