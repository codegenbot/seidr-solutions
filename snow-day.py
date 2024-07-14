def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = 0
    current_snow = initial_snow
    for _ in range(hours):
        total_snow += current_snow
        current_snow += rate_of_fall - melting_rate * current_snow
    return round(current_snow, 8)