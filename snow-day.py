def snow_day(hours, snow_ground, snow_fall_rate, melting_proportion):
    for _ in range(hours):
        snow_ground += snow_fall_rate - (snow_ground * melting_proportion)
    return round(snow_ground, 5)