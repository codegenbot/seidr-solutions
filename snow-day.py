Here is the solution:

def snow_day(hours, initial_snow, rate, melt_rate):
    return initial_snow + (hours * rate) - ((1 - melt_rate) ** hours) * initial_snow