def snow_day(hours, ground_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall - melting_rate * ground_snow
        ground_snow = max(0, total_snow)
    return round(total_snow, 5)