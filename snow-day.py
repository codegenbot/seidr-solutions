def snow_day(hours, initial_snow, rate_snow, melt_rate):
    return initial_snow + (rate_snow * hours) - (melt_rate * hours)