```
def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = initial_snow + (rate * hours)
    return round(total_snow - (melt_rate * hours), 8)