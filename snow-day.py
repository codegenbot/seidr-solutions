def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_of_snow_melting):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snow_fall
        if snow > 0:
            snow *= 1 - proportion_of_snow_melting
    return round(snow, 10)