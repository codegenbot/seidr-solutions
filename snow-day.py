def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours - 1): 
        total_snow += rate_of_snowfall - melting_rate
    return total_snow + rate_of_snowfall * (hours - 1)