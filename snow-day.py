def snow_day(hours, initial_snow, rate_of_fall_inches_per_hour, melting_rate_percentage):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_fall_inches_per_hour / 12.0  
        total_snow -= (rate_of_fall_inches_per_hour / 12.0) - ((total_snow * melting_rate_percentage) / 10000)
    return round(total_snow, 6)