def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        new_snow = min(rate_of_fall, 24 - current_snow)  
        current_snow += new_snow
        current_snow -= min(current_snow, melt_rate)
    return round(current_snow, 6)