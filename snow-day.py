def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow *= 1 - proportion_melting
    return round(total_snow, 6)