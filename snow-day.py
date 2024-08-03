Here is the solution:

def snow_day(hours, on_ground, rate, melt):
    return round(on_ground + (rate * hours) - ((melt * hours)), 5)