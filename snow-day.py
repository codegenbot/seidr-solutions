def snow_day(hours, current_snow, rate_snowfall, proportion_melting):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate_snowfall
        total_snow *= 1 - proportion_melting
    return round(total_snow, 5)