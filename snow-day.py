def snow_day(hours, ground_snow, rate, melt_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate
        total_snow -= total_snow * melt_rate
    return round(total_snow, 6)