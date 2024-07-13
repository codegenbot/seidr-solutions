def snow_day(hours, current_snow, rate, melt_rate):
    return round(current_snow + hours * rate - hours * melt_rate, 5)