def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow *= (1 - melting_rate) 
        snow += rate_of_fall 
    return round(snow, 6)