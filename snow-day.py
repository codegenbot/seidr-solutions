def snow_day(hours, snow_ground, snow_fall_rate, melting_rate):
    snow_ground = float(snow_ground)
    snow_fall_rate = float(snow_fall_rate)
    melting_rate = float(melting_rate)

    new_snow_ground = 0.0
    for _ in range(int(hours)):
        new_snow_ground += snow_fall_rate
        if new_snow_ground > 0:
            new_snow_ground -= snow_ground * melting_rate

    return new_snow_ground