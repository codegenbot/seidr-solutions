
def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    total_snow = 0
    if snow_on_ground == 0:
        new_snow = snow_fall_rate * hours
    else:
        for hour in range(hours):
            # Melt existing snow before adding new snow
            melting = (snow_on_ground - (hour * melting_proportion))
            total_snow += melting
            new_snow = ((snow_fall_rate * hours) - melting) * (1 - melting_proportion)
            total_snow += new_snow
    return round(total_snow, 1)