def snow_day(hours, ground_snow, fall_rate, melt_rate):
    return round(ground_snow + hours * (fall_rate - melt_rate), 10)