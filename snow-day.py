def snow_day(hours, initial_snow, rate, proportion):
    return round(initial_snow + (rate * hours) - (proportion * hours * initial_snow), 6)