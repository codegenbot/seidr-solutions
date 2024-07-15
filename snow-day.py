def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground + snow_fall_rate * hours
    snow *= (1 - snow_melt_rate / 100) ** hours
    return round(snow, 10)