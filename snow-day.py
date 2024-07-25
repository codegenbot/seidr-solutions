def snow_day(hours, snow_ground, rate_of_snow_fall, melting_rate):
    for _ in range(hours):
        snow_ground += rate_of_snow_fall
        snow_ground *= 1 - melting_rate
    return round(snow_ground, 6)