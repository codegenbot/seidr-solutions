def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = 0.0
    total_snow += initial_snow
    total_snow += hours * rate_of_snowfall
    total_snow -= hours * proportion_melting
    return total_snow