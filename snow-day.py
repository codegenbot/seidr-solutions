def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall - initial_snow * proportion_melting
        initial_snow = min(
            initial_snow + rate_of_snowfall, 100
        )  # Assuming maximum snow is 100 units
    return round(total_snow, 6)