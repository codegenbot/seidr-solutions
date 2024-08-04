def snow_day(hours, snow, rate, melt):
    return round(snow + (rate * hours) - ((melt * hours) if hours > 0 else 0), 5)