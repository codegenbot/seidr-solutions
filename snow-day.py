Here is the Python code that solves the problem:

def snow_day(hours, ground_snow, rate_fall, melt_rate):
    return ground_snow + hours * rate_fall - hours * melt_rate