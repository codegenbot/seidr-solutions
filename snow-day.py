```
def snow_day(hours, on_ground, rate, melt_rate):
    for _ in range(hours):
        new_snow = on_ground + rate
        on_ground = new_snow * (1 - melt_rate)
    return round(on_ground, 5)