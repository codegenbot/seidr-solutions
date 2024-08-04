def snow_day(hours, ground_snow, rate, melt_rate):
    return ground_snow + (rate * hours) - (melt_rate * hours)