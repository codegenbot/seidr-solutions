Here is the Python function to solve the problem:

def snow_day(hours, snow, rate, melt_rate):
    return round(snow + (rate * hours) - ((melt_rate * hours) if melt_rate else 0), 5)