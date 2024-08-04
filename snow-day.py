def snow_day(hours, initial_snow, snow_fall_rate, melting_rate):
    snow_on_ground = initial_snow
    for _ in range(hours):
        snow_on_ground += snow_fall_rate
        snow_on_ground -= min(snow_on_ground, melting_rate)
    return round(snow_on_ground, 5)