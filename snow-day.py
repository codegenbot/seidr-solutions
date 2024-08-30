def snow_day(hours, snow_ground, rate, melting_rate):
    return round((snow_ground + (hours * rate)) - ((melting_rate) * hours), 8)