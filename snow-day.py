Here is the solution:

def snow_day(hours, initial_snow, snowfall_rate, melt_rate):
    return (initial_snow + snowfall_rate * hours) / (1 - math.pow(1 - melt_rate, hours))