def snow_day(hours, snow_ground, snow_fall_rate, melting_rate):
    for _ in range(hours):
        snow_ground += snow_fall_rate
        snow_ground *= 1 - melting_rate
    return round(snow_ground, 9)