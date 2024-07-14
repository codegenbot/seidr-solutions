def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(hours):
        new_snow = round(snow + rate_of_snowfall - melting_rate, 6) 
        snow = max(new_snow, 0.0)
    return format(snow, ".6f")