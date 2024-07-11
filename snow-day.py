def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += snowfall_rate
        snow -= snow * melting_rate
    return round(snow, 6)