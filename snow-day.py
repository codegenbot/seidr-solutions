def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snowfall
        if melting_rate > 0:
            snow -= snow * melting_rate
    return round(snow, 5)