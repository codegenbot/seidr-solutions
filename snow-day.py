
def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    if melting_proportion > snow_on_ground:
        return round((snow_on_ground + (hours * snow_fall_rate)) / (1 - melting_proportion), 1)
    else:
        return round(snow_on_ground, 1)