def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    return round(initial_snow + (rate_of_snowfall * hours) - (melt_rate * hours), 2)