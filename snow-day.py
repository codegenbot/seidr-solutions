def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    if snow_on_ground == 0:
        new_snow = (snow_fall_rate * hours) * (1 - melting_proportion)
        return round(new_snow, 1)