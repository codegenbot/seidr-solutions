def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_fall
        if melt_rate > 0:
            total_snow -= total_snow * melt_rate
    return float(format(total_snow, ".10f"))