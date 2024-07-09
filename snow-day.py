def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        if snow > 0:
            excess_snow = snow - (snow * melting_rate)
            snow = excess_snow
    return round(snow, 8)