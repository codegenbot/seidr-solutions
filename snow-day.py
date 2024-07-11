def snow_day(hours, amount, rate, melt):
    total = amount
    for _ in range(hours):
        total += rate
        if total > 0:
            total -= total * melt
    return total