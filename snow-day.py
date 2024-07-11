def snow_day(hours, ground_snow, rate_snowfall, melting_rate):
    return round(
        (ground_snow + (rate_snowfall * hours)) * (1 - melting_rate) ** hours, 10
    )