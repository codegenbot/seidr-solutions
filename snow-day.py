```
def snow_day(hours, on_ground, rate, melt_rate):
    for _ in range(hours):
        on_ground *= (1 - melt_rate)
        on_ground += rate
    return round(on_ground, 5)