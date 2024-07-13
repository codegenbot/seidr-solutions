def snow_day(hours, initial_snow, rate, proportion):
    return round(initial_snow + hours * rate - (proportion * 100) * hours / 100, 6)