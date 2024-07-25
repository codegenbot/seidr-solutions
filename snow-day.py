def snow_day(hours, snow_ground, rate_of_snowfall, proportion_melting):
    snow_ground += rate_of_snowfall * hours
    snow_ground -= proportion_melting * hours * snow_ground
    return round(snow_ground, 6)