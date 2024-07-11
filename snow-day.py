```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        melted_snow = total_snow * melt_rate  
        total_snow -= melted_snow  
        total_snow += rate_of_fall  
    return round(total_snow, 5)