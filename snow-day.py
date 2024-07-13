```
def snow_day(hours, initial_snow, rate, melt_rate):
    snow_ground = initial_snow
    for _ in range(hours):
        snow_ground += rate
        if snow_ground > 0:
            melted_amount = min(snow_ground, snow_ground * melt_rate)
            snow_ground -= melted_amount
    return round(snow_ground, 5)