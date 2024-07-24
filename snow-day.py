def snow_day(hours, start_snow, rate, melt_rate):
    total_snow = start_snow
    for _ in range(hours):
        total_snow += rate
        total_snow -= min(total_snow, rate * (1 - melt_rate))
    return round(total_snow, 8)