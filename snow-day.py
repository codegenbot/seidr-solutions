def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting):
    return snow_on_ground + (rate_of_snow_fall * hours) - (proportion_melting * hours)