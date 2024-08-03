def snow_day(hours, initial_snow, rate, melt_rate):
    return round(initial_snow + hours * rate - hours * melt_rate, 6)