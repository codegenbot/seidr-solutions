def snow_day(hours, initial_snow, rate_of_fall_inches_per_hour, melting_rate_percentage):
    total_snow = initial_snow
    inches_to_feet = rate_of_fall_inches_per_hour / 12 / 12
    
    for _ in range(hours):
        total_snow += inches_to_feet
        total_snow -= (total_snow * melting_rate_percentage) / 100
        
    return round(total_snow, 6)