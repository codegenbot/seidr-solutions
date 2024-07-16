def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow -= total_snow * melting_rate  
        total_snow += rate_of_fall  
    return round(total_snow, 5)