def snow_day(hours, ground_snow, rate, melt):
    return round(ground_snow + (rate * hours) - ((melt * 100) / 60) * hours, 5)