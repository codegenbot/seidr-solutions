def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(hours): 
        initial_snow += rate_of_snowfall - melting_rate
        total_snow += initial_snow
    return total_snow