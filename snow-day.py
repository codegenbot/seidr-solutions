def snow_day(hours, snow_on_ground, rate_of_snowfall, proportion_melting):
    return round(
        snow_on_ground + (rate_of_snowfall * hours) - (proportion_melting * hours), 5
    )