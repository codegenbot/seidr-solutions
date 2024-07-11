def snow_day(hours, current_snow, rate_of_fall, melt_rate):
    return round(current_snow + (rate_of_fall * hours) - (melt_rate * hours), 6)