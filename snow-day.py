def snow_day(hours, ground, rate, melt):
    total = ground
    for _ in range(hours):
        total += rate
        if total > 0:
            total -= total * melt
    return round(total, 6)