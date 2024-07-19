Here is the solution:

def snow_day(hours, on_ground, rate, melt_rate):
    total = on_ground + rate * hours
    for _ in range(int(hours)):
        total += rate - total * melt_rate
    return round(total, 8)