```
def snow_day(hours, initial_snow, rate, melt_rate):
    return round(initial_snow + sum(rate - melt_rate for _ in range(hours)))