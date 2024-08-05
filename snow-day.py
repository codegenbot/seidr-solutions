def snow_day(hours, ground_snow, rate_snow_fall, proportion_melt):
    for _ in range(hours):
        ground_snow += rate_snow_fall - ground_snow * proportion_melt
    return round(ground_snow, 5)