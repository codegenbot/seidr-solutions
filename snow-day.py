def snow_day(hours, initial_snow, rate_snowfall, melt_rate):
    return round(initial_snow + hours * rate_snowfall - hours * melt_rate, 6)