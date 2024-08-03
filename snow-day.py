def snow_day(hours, amount_snow, rate_snow, melt_rate):
    total_snow = amount_snow
    for _ in range(hours):
        total_snow += rate_snow
        if total_snow > 0:
            total_snow *= 1 - melt_rate
    return round(total_snow, 6)