def snow_day(hours, initial_snow, snow_fall, melt_rate):
    current_snow = initial_snow
    for i in range(1, hours+1):
        current_snow += snow_fall
        if melt_rate > 0:
            current_snow -= melt_rate * current_snow
        else:
            break
    return current_snow