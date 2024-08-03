def snow_day(hours, initial_snow, snow_fall_rate, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += snow_fall_rate - melting_rate * snow
    return round(snow, 5)