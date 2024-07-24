def snow_day(hours, snow_on_ground, snow_fall_rate, melting_rate):
    return snow_on_ground + (snow_fall_rate * hours) - (melting_rate * hours)