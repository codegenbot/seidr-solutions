def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate
        if total_snow > 0:
            total_snow -= melt_rate
        else:
            break
    return round(total_snow, 5)