def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        if snow > 0:
            excess = math.floor(snow)
            snow -= excess
            snow += excess * (1 - melting_rate)
        else:
            break
    return snow