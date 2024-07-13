def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow_on_ground = initial_snow
    for _ in range(hours):
        snow_on_ground += rate_of_snowfall
        snow_on_ground -= melting_rate * snow_on_ground
    return round(snow_on_ground, 10)