def snow_day(hours, rate_of_snow_fall, proportion_melting):
    initial_snow_ground = 0
    snow_ground = round(initial_snow_ground + (rate_of_snow_fall * min(hours, 24)) - (proportion_melting * min(hours, 24)), 5)
    for i in range(1, hours+1):
        if i >= 24:
            snow_ground = round(snow_ground + rate_of_snow_fall - proportion_melting, 5)
        else:
            snow_ground = round(snow_ground + rate_of_snow_fall - proportion_melting, 5)
    return snow_ground