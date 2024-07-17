Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    return round(initial_snow + hours * rate_of_snowfall - (hours * melt_rate), 6)