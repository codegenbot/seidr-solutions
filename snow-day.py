def snow_day(hours, initial_snow_inches, rate_of_fall_inches_per_hour, melting_rate_percentage):
    total_snow_feet = initial_snow_inches * (0.08333333 * 12) / 12
    hourly_melting = (melting_rate_percentage / 100.0)
    
    for _ in range(hours):
        total_snow_feet += rate_of_fall_inches_per_hour * (0.08333333 * 12) / 12 / 12
        total_snow_feet -= hourly_melting * total_snow_feet
        
    return round(total_snow_feet,6)