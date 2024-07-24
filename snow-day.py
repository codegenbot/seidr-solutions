def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate_snowfall - melt_rate * total_snow
    return round(total_snow, 8)