def snow_day(hours, on_ground, rate, melt_rate):
    return round(on_ground + (rate * hours) - (hours * melt_rate), 5)