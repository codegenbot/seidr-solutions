def snow_day(hours, initial_snow, rate, proportion):
    return round(initial_snow + hours * rate - hours * proportion, 6)