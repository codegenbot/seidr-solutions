def snow_day(hours, initial_snow, snow_rate, melt_rate):
    return initial_snow + (snow_rate * hours) - (melt_rate * hours)