def snow_day(hours, ground, rate, melt):
    total = 0.0
    for _ in range(hours):
        total += rate
        if total > ground:
            extra = total - ground
            total = ground
            while extra > 0 and melt < 1:
                excess_melted = min(extra, (1 - melt) * ground)
                extra -= excess_melted
                ground -= excess_melted
                rate *= 1 - melt
    return round(total + ground, 5)