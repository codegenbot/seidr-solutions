def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    return round(ground_snow + (hours * rate_snowfall) - ((hours * melt_rate)), 6)