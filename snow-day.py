def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    snow_on_ground = initial_snow

    for _ in range(hours):
        snow_on_ground += rate_of_snowfall
        snow_on_ground -= snow_on_ground * melting_rate

    return round(snow_on_ground, 10)