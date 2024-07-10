def snow_day(hours, on_ground, rate, melt_rate):
    return on_ground + (rate * hours) - ((melt_rate * hours) if melt_rate != 0 else 0)