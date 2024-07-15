def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    melt_accumulated = 0
    for _ in range(hours):
        snow_melted = min(snow, snow_fall_rate) * (snow_melt_rate / 100) + melt_accumulated
        melt_accumulated = snow_melted
        snow += snow_fall_rate
        snow -= snow_melted
    return snow