Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return round(initial_snow + (rate_of_snowfall * hours) - ((melting_rate * hours) if hours > 0 else 0), 6)