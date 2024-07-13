def snow_day(hours, initial_snow_ground, rate, melt_rate):
    total_snow_ground = initial_snow_ground
    for _ in range(hours):
        total_snow_ground += rate
    total_snow_ground -= total_snow_ground * melt_rate
    return round(total_snow_ground, 5)