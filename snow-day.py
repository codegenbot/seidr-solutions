def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snowfall  # Add new snowfall
        rate_of_snowfall *= (1 + proportion_melting)  # Update snowfall rate
        snow *= (1 - proportion_melting)  # Melt some snow
    return round(snow, 2)