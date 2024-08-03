def snow_day(hours, amount_snow, rate_snowfall, proportion_melting):
    return amount_snow + (rate_snowfall * hours) - (proportion_melting * hours)