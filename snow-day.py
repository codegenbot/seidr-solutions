def snow_day(hours, initial_snow, rate_of_fall_inches_per_hour, melting_rate_percentage):
    total_snow = initial_snow
    hourly_melting = (melting_rate_percentage / 100.0)
    
    inches_to_feet_conversion_factor = 1/12
    
    for _ in range(hours):
        rate_of_fall_feet_per_hour = rate_of_fall_inches_per_hour * inches_to_feet_conversion_factor
        total_snow += rate_of_fall_feet_per_hour
        total_snow -= hourly_melting * total_snow
        
    return round(total_snow,6)