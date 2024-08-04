Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return round(initial_snow + (rate_of_snowfall * hours) - ((hours * melting_rate) if melting_rate else 0), 5)