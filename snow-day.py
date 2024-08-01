def snow_day(hours, current_snow, rate, melt_rate):
    return round((current_snow + rate * hours) - (melt_rate * hours), 6)