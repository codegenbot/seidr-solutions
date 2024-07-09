def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(hours): 
        total_snow += initial_snow + rate_of_snowfall - melting_rate
        initial_snow += rate_of_snowfall - melting_rate
    return total_snow