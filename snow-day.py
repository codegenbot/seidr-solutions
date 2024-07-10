Here is the solution:

def snow_day(hours, ground_snow, rate_snowfall, melting_rate):
    total_snow = ground_snow + hours * rate_snowfall
    for _ in range(int(hours)):
        total_snow += rate_snowfall - melting_rate * total_snow
    return round(total_snow, 5)