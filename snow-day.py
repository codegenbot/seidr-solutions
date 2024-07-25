def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_melting):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snow_fall
        total_snow *= 1 - proportion_melting
    return round(total_snow, 6)