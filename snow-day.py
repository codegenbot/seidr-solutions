def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = round(initial_snow, 2)
    for _ in range(hours):
        snow += rate_of_snowfall
        snow = max(snow - melting_rate, 0)  
    return round(snow, 2)