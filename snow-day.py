def snow_day(hours, initial_snow, rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate
        if snow > 0:
            excess = math.ceil(snow - melt_rate)
            snow -= excess
    return snow