```
def snow_day(hours, initial_snow, rate, melt_rate):
    return int(initial_snow + hours * rate) - int((hours * melt_rate))