def snow_day(hours, on_ground, rate, melt_rate):
    snow = on_ground
    for _ in range(hours):
        snow += rate
        snow *= 1 - melt_rate
    return round(snow, 5)