```
def snow_day(hours, on_ground, rate, melt_rate):
    for _ in range(hours):
        on_ground += rate
        on_ground = round(on_ground * (1 - melt_rate), 5)
    return on_ground