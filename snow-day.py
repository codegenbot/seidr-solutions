```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_fall  # Add new snow first
        total_snow -= total_snow * melt_rate  # Then melt what's there
    return round(total_snow, 5)