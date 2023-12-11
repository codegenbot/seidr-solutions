
def snow_day(hours, initial_snow, snow_fall, melt_rate):
    current_snow = initial_snow
    total_snow = 0
    
    for i in range(hours):
        current_snow += snow_fall
        current_snow *= (1 - melt_rate)
        total_snow += current_snow
    
    return total_snow