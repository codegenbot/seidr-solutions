def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    return round(
        (snow_on_ground + (hours * snow_fall_rate)) / (1 - melting_proportion), 1
    )