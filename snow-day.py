```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = initial_snow
    total_snow += rate_of_fall * hours  # Add all the snow first
    total_snow -= total_snow * melt_rate  # Then melt proportionally
    return round(total_snow, 5)