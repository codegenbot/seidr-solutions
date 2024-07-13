```
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow + rate_of_fall
    for _ in range(hours-1):  
        total_snow += rate_of_fall
        total_snow -= melting_rate * total_snow
    return round(total_snow, 6)