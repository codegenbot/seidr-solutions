def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion):
    for _ in range(hours):
        snow_on_ground *= 1 - snow_melt_proportion
        snow_on_ground += snow_fall_rate
    return snow_on_ground