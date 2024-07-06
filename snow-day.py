def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    snow_fallen = hours * snow_fall_rate
    snow_melted = (snow_on_ground + snow_fallen) * melting_proportion
    return snow_on_ground + snow_fallen - snow_melted