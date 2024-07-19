def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate  
        melted = min(current_snow, melt_rate)  
        current_snow -= melted  
    return current_snow