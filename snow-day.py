def snow_day(hours, ground, rate, melt):
    return round(ground + (rate - melt) * hours, 5)