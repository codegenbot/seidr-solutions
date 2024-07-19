def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        snow *= (1 - proportion_melting)
        snow += rate_of_snowfall
    return round(snow, 6)