def snow_day(hours, initial_snow, rate_of_snow_fall, melt_rate):
    return round(initial_snow + (hours - 1) * rate_of_snow_fall - hours * melt_rate, 6)