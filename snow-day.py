def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    return max(0, initial_snow + hours * rate_of_snowfall - hours * proportion_melting)