def snow_day(hours, initial_snow, rate, melt):
    return round(initial_snow + hours * rate - hours * melt, 5)