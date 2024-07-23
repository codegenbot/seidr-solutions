def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_fall - melting_rate * total_snow
    return round(total_snow, 6)