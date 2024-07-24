Here is the solution:

def snow_day(hours, amount, rate, melt):
    return round(amount + (rate * hours) - (melt * hours), 5)