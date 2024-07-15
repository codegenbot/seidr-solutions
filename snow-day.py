def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    melted_snow_total = 0
    for _ in range(hours):
        melted_snow_total += snow * (snow_melt_rate / 100)
        snow += snow_fall_rate
    snow -= melted_snow_total
    return round(snow, 10)