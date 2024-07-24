def snow_day(hours, snow, rate, melt):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate
        if total_snow > 0:
            total_snow -= total_snow * melt
    return round(total_snow, 5)