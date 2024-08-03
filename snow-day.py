def snow_day(hours, initial_snow, rate, proportion):
    return round(initial_snow + (rate * hours) - ((hours * proportion) or 0), 5)