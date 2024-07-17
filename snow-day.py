def snow_day(hours, snow_ground, rate, melt):
    total_snow = snow_ground
    for _ in range(hours):
        total_snow += rate
        if melt:
            total_snow -= melt * total_snow
    return round(total_snow, 8)