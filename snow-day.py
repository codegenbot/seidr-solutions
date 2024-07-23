def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    for _ in range(hours):
        snow_on_ground = (
            snow_on_ground + snow_fall_rate - (snow_on_ground * snow_melt_rate)
        )
    return snow_on_ground