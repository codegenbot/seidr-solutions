def snow_day(hours, on_ground, rate, melt_rate):
    total = on_ground
    for _ in range(hours):
        total += rate
        total -= total * melt_rate
    return round(total, 5)