def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_fall
        current_snow *= 1 - melting_rate
    return round(current_snow, 5)