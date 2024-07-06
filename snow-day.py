def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    if snow_on_ground == 0:
        return round((snow_fall_rate * hours) + (hours * snow_fall_rate)) * (1 - melting_proportion), 1)