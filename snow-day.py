def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    snow_accumulation = snow_fall_rate
    snow_loss = snow_melt_rate * snow
    effective_snow_fall_rate = snow_fall_rate - snow_melt_rate
    snow += (effective_snow_fall_rate * hours) - (snow_loss * hours)
    return snow