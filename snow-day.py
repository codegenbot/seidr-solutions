Here is the solution:

def snow_day(hours, initial_snow, rate_snowfall, rate_melting):
    return round(initial_snow + hours * rate_snowfall - hours * rate_melting, 6)