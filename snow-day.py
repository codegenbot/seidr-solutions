def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    return snow_on_ground + hours * (snow_fall_rate - snow_melt_rate * snow_fall_rate)