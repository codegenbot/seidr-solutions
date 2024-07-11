def snow_day(hours, ground, rate, melt):
    return ground + rate * hours - melt * hours if hours > 0 else ground