```
def snow_day(hours, initial_snow_ground, rate_of_snow_fall, proportion_melting):
    current_snow_ground = initial_snow_ground
    for _ in range(hours):
        current_snow_ground += rate_of_snow_fall
        current_snow_ground -= max(0, min(current_snow_ground, 1)) * proportion_melting
    return round(current_snow_ground, 5)