def snow_day(hours, initial_snow, rate_snowfall, melt_rate):
    snow = initial_snow + hours * rate_snowfall
    return round(snow, 6)