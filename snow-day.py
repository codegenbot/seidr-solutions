```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    return round(initial_snow + rate_of_fall * (1 - melt_rate) ** hours, 5)