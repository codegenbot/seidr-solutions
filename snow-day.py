def snow_day(hours, snow_ground, rate_snow_fall, melting_rate):
    snow_on_ground = snow_ground
    for _ in range(hours):
        snow_on_ground += rate_snow_fall - melting_rate * snow_on_ground
    return round(snow_on_ground, 12)