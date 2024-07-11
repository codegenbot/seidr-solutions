Here is the completed code:

def snow_day(hours, on_ground, rate, melt):
    return round(on_ground + hours * (rate - melt), 6)