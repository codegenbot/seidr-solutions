def snow_day(hours, initial_snow, rate_of_snow_fall, melting_rate):
    snow = initial_snow + hours * rate_of_snow_fall
    for _ in range(hours):
        snow += rate_of_snow_fall - melting_rate
    return round(snow, 9)