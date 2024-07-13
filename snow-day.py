def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall - proportion_melting * initial_snow
        initial_snow = max(
            0, initial_snow + rate_of_snowfall - proportion_melting * initial_snow
        )
    return round(initial_snow, 10)