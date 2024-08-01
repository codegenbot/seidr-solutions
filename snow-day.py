Here is the solution:

def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    return initial_snow + (rate_of_fall - melt_rate) * hours if hours > 0 else initial_snow