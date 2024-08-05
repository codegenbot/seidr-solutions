def snow_day(hours, initial_snow, rate_snow, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_snow
        if snow > 0:
            snow -= snow * melt_rate
    return round(snow, 5)