def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate
        if total_snow < 0:
            total_snow = 0.0
        else:
            total_snow *= 1 - melt_rate
    return round(total_snow, 6)