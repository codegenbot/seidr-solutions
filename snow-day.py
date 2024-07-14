def snow_day(hours, ground_snow, rate_snow, melt_rate):
    return round((ground_snow + hours * rate_snow) - (hours * melt_rate), 5)