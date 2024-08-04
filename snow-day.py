def snow_day(hours, initial_snow, rate, melt_rate):
    return initial_snow + (hours * rate) - (hours * initial_snow * melt_rate)