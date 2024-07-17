Here is the solution:

def snow_day(hours, current_snow, rate, melt_rate):
    return current_snow + (rate * hours) - (melt_rate * hours)