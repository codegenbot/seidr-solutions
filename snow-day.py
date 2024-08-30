def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate
        if melt_rate > 0:
            total_snow -= min(total_snow, total_snow * melt_rate)
    return total_snow