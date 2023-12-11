def snow_day(hours, initial_snow, snow_fall, melt_rate):
    current_snow = initial_snow
    total_snow = 0
    
    for i in range(hours):
        melted_snow = current_snow * melt_rate
        current_snow += snow_fall - melted_snow
        total_snow += current_snow
    
    return total_snow
