def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate
        if total_snow > 0:
            total_snow -= max(0, min(total_snow, melt_rate))
    return total_snow