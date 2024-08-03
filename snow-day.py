def snow_day(hours, ground, rate, melt):
    return round((ground + hours * rate - hours * melt), 5)