def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    ground_snow = float(ground_snow) + (float(rate_snowfall) / 3600) * hours
    ground_snow -= abs(ground_snow) * float(melt_rate) / 100 * hours
    return str(round(float(ground_snow),6))