import math
def get_snow_amount(hours, snow_on_ground, rate_of_snow_fall, proportion_of_snow_melting):
    for i in range(hours):
        snow_on_ground += rate_of_snow_fall * math.exp(-proportion_of_snow_melting)
    return snow_on_ground