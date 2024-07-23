def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    melted_accumulated = 0
    for _ in range(hours):
        snow_on_ground += snow_fall_rate
        snow_melted = snow_on_ground * snow_melt_rate
        melted_accumulated += snow_melted
        snow_on_ground -= melted_accumulated

    return round(snow_on_ground, 15)