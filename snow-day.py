```
import math

def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += int(rate)
        if math.isclose(current_snow, 0):
            break
        current_snow = max(0, current_snow - int(melt_rate))
    return round(current_snow, 6)