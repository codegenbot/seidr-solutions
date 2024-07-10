def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    return round(initial_snow + hours * rate_of_fall - hours * melt_rate, 6)