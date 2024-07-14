Here is the solution in Python:

def snow_day(hours, initial_snow, rate, melt):
    return initial_snow + rate * hours - melt * hours