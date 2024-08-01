def snow_day(hours, initial_snow, rate_snow_fall, melt_rate):
    return round(initial_snow + hours * rate_snow_fall - (hours * melt_rate), 5)