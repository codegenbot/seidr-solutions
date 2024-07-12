def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        new_snow = total_snow + rate_of_fall
        melted = min(new_snow * melting_rate, new_snow)
        total_snow = round(new_snow - melted, 6) 
    return total_snow