def snow_day(hours, amount_snow, rate_fall, melt_rate):
    return round((amount_snow + (hours * rate_fall)) * (1 - melt_rate) ** hours, 10)