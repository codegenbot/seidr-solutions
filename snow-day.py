def snow_day(hours, ground_snow, rate_fall, melt_rate):
    return round((ground_snow + hours * rate_fall) * (1 - melt_rate) ** hours, 6)