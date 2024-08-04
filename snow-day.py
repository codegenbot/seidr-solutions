def snow_day(hours, snow, rate, melt):
    total_snow = snow + hours * rate
    return round(total_snow - (hours * melt), 5)