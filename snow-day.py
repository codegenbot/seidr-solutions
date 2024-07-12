Here is the solution:

def snow_day(hours, initial_snow, rate_snowfall, melting_rate):
    return initial_snow + (hours * rate_snowfall) - (hours * initial_snow * melting_rate)