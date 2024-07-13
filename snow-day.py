def snow_day(hours, snow_ground, rate, melt_rate):
    for _ in range(hours):
        snow_ground += rate
        if snow_ground > 0:
            snow_ground -= snow_ground * melt_rate
    return round(snow_ground, 5)