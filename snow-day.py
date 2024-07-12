def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        melted = min(total_snow * melting_rate, total_snow)
        total_snow -= melted
        total_snow += rate_of_fall  # Add new snow after melting
        total_snow = round(total_snow, 6)  
    return total_snow