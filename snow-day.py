def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        if melt_rate > 0:
            snow -= min(snow, rate_of_fall / melt_rate)
    return round(snow, 6)