Here is the solution:

def snow_day(hours, ground_snow, rate_snow_fall, melt_rate):
    return round(ground_snow + (rate_snow_fall * hours) - (melt_rate * hours), 6)