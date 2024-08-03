Here is the solution:

def snow_day(hours, initial_snow, rate_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_snowfall
        total_snow -= total_snow * melting_rate / 100
    return round(total_snow, 5)