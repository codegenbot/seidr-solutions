```
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    max_snow_fall_per_hour = 10 ** 9
    total_snow = initial_snow
    for _ in range(hours):
        new_snow_fall = min(rate_of_fall, max_snow_fall_per_hour)
        total_snow += new_snow_fall
        melted = min(total_snow * melting_rate, total_snow)
        total_snow -= melted
    return total_snow