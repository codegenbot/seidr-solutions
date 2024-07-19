def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        snow *= (1 - proportion_melting)  # melt existing snow first
        snow += rate_of_snowfall           # then add new snowfall
    return round(snow, 6)