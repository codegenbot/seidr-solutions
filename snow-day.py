def snow_day(hours, initial_snow, rate_of_fall, proportion_melt):
    return round(initial_snow + hours * rate_of_fall - hours * proportion_melt, 5)