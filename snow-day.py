```
def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = int(initial_snow * 100)
    for _ in range(hours):
        current_snow += int(rate * 100)
        current_snow = max(0, current_snow - int(melt_rate * 100))
    return current_snow / 100.0