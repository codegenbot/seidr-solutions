def snow_day(hours, snow_on_ground, rate_of_snowfall, proportion_melting):
    snow_on_ground += rate_of_snowfall * hours
    remaining_snow = snow_on_ground - (proportion_melting * snow_on_ground) * hours
    return round(remaining_snow, 10)