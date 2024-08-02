def snow_day(hours, snow_ground, rate, melting_rate):
    for _ in range(int(hours)):
        snow_ground += rate
        snow_ground *= 1 - melting_rate
    return round(snow_ground, 6)