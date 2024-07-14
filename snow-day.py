def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(hours):
        new_snow = snow + rate_of_snowfall - min(snow, melting_rate)
        snow = new_snow  
    return format(snow, ".6f")