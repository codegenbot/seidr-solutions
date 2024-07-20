def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = round(initial_snow + (rate - melt_rate) * hours, 5)
    return total_snow