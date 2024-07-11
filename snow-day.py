def snow_day(hours, initial_snow, rate_of_fall_inches_per_hour, melting_rate_percentage):
    total_snow = initial_snow
    hourly_melting = (melting_rate_percentage / 100.0)
    
    for _ in range(hours):
        new_snow = rate_of_fall_inches_per_hour * 0.02777778  # convert inches to decimal
        total_snow += new_snow - (hourly_melting * total_snow)  # subtract melting before adding new snow
        
    return round(total_snow,6)