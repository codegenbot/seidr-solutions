def snow_day(hours, ground_snow, fall_rate, melt_rate):
    for _ in range(hours):
        ground_snow += fall_rate
        ground_snow -= min(ground_snow, fall_rate) * melt_rate
    return round(ground_snow, 8)