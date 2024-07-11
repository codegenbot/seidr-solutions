def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snow += snow_fall_rate  # Adding snow falling
        snow -= snow * snow_melt_rate  # Subtracting melted snow
    return snow