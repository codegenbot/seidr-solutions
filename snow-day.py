def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snowfall  # add new snowfall
        snow *= (1 - proportion_melting)  # melt existing snow
    return round(snow, 2)