def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for hour in range(hours):
        snow_fall = rate_of_snowfall * (1 - melting_rate) ** (hour + 1)
        total_snow += round(snow_fall, 2)
    return round(total_snow, 2)