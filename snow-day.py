
def snow_day(hours, initial_snow, snow_fall, melt_rate):
    new_snow = initial_snow + snow_fall * (1 - melt_rate)
    total_snow = new_snow * hours
    return total_snow