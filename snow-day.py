def snow_day(hours, initial_snow, snow_fall_rate, melt_rate):
    snow_on_ground = initial_snow + hours * snow_fall_rate - hours * melt_rate * initial_snow
    if snow_on_ground < 0:
        snow_on_ground = 0
    return snow_on_ground