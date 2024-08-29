def snow_day(hours, snow_ground, snow_fall_rate, melting_rate):
    return round((snow_ground + hours * snow_fall_rate - hours * melting_rate), 6)