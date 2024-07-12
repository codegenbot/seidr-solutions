```
def snow_day(hours, initial_snow, rate, melt_rate):
    return min(initial_snow + hours * rate, initial_snow + (hours * rate - hours * melt_rate))