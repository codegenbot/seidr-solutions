def snow_day(hours, snow_ground, rate, melting_rate):
    for _ in range(hours):
        snow_ground += rate
        snow_ground -= snow_ground * melting_rate
    return round(snow_ground, 5)