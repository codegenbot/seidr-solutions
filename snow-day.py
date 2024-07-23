def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    for _ in range(hours):
        snow_on_ground = round(
            (snow_on_ground + snow_fall_rate) * (1 - snow_melt_rate), 10
        )
    return snow_on_ground