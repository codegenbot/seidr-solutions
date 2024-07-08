def snow_day(hours, ground_snow, rate, melt_rate):
    total_snow = ground_snow
    for _ in range(hours*60):
        total_snow += rate / 60
        total_snow -= total_snow * melt_rate
    return round(total_snow, 6)