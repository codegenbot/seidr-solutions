def snow_day(hours, amount_snow, rate_fall, rate_melt):
    return round((amount_snow + hours * rate_fall) - (hours * rate_melt), 5)