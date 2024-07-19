def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        increase = rate_of_snowfall
        snow += increase
        snow *= (1 - proportion_melting)
    return round(snow, 2)