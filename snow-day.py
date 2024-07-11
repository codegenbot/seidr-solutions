def snow_day(hours, initial_snow, rate_of_fall_inches_per_hour, melting_rate_percentage):
    total_snow = initial_snow
    hourly_snowfall = rate_of_fall_inches_per_hour / 12.0
    hourly_melting = (melting_rate_percentage / 100.0)
    
    for _ in range(hours):
        total_snow += hourly_snowfall
        total_snow -= hourly_melting * total_snow
        
    return round(total_snow,6)