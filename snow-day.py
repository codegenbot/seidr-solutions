def snow_day(hours, on_ground, rate, melt_rate):
    return round(on_ground + hours * rate - hours * melt_rate, 5)