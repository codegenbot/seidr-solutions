```
def snow_day(hours, on_ground, rate, melt_rate):
    for _ in range(hours):
        on_ground = on_ground + rate - melt_rate * on_ground
    return round(on_ground, 5)