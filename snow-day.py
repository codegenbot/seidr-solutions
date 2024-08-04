def snow_day(hours, snow, rate, melt_rate):
    return snow + (rate * hours) - (melt_rate * hours)