def snow_day(hours, initial_snow, snowfall_rate, melt_rate):
    return initial_snow + (snowfall_rate * hours) - (melt_rate * hours)