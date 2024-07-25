def snow_day(hours, amount_snow, rate_snowfall, proportion_melting):
    for _ in range(int(hours)):
        amount_snow += rate_snowfall
        amount_snow *= 1 - proportion_melting
    return round(amount_snow, 5)