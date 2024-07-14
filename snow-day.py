def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = format(initial_snow, ".6f")
    for _ in range(hours):
        new_snow = float(snow) + rate_of_snowfall - min(float(snow), melting_rate)
        snow = format(new_snow, ".6f")  
    return snow