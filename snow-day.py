Here is the solution:

def snow_day(hours, amount, rate, melt):
    for _ in range(hours):
        amount += rate
        amount -= melt * amount
    return round(amount, 5)