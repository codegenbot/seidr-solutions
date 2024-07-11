def calculate_snow_hours(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion):
    snow = snow_on_ground
    for _ in range(hours):
        snow_added = snow_fall_rate
        snow_melted = snow * snow_melt_proportion
        snow = snow + snow_added - snow_melted
    return round(snow, 16)