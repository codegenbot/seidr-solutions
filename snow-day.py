def snow_day(hours, initial_snow, rate, melt_rate):
    return initial_snow + hours * rate - (hours * melt_rate)