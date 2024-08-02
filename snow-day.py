def snow_day(hours, ground_snow, rate_of_fall, melt_rate):
    return round(ground_snow + hours * rate_of_fall - hours * melt_rate, 10)