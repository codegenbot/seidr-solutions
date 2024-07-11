def snow_day(hours, snow, rate, melt):
    total_snow = snow + hours * rate
    return total_snow - hours * melt