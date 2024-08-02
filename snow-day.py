def snow_day(hours, on_ground, rate, melt_rate):
    total_snow = on_ground
    for _ in range(hours):
        total_snow += rate
        total_snow *= 1 - melt_rate
    return round(total_snow, 6)