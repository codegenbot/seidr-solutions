def snow_day(hours, initial_snow, rate, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate
        snow -= melting_rate * snow
    return round(snow, 5)