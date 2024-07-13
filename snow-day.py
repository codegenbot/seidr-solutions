def snow_day(hours, amount, rate, melt):
    total = 0
    for _ in range(hours):
        total += rate
        if total > 1e10:  # to avoid floating point precision issues
            return float("inf")
        total *= 1 - melt
    return round(total, 5)