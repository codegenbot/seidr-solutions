def snow_day(hours, initial_snow, rate, proportion):
    return initial_snow + (hours * rate) - (proportion * hours * initial_snow)