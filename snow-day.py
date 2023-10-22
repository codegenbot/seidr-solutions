def amount_of_snow(hours, rate_of_snow_fall, snow_on_the_ground, proportion_snow_melting):
    if hours is None or rate_of_snow_fall is None or snow_on_the_ground is None \
            or proportion_snow_melting is None or not isinstance(hours, int) \
            or not isinstance(rate_of_snow_fall, float) or not isinstance(snow_on_the_ground, float) \
            or not isinstance(proportion_snow_melting, float):
        raise TypeError('Invalid type')
    if hours < 0 or rate_of_snow_fall < 0 or snow_on_the_ground < 0 or proportion_snow_melting < 0:
        raise Exception('Invalid value')
    snow = snow_on_the_ground

    for n in range(hours):
        snow -= proportion_snow_melting
        snow += rate_of_snow_fall

    if snow < 0:
        snow = 0
    return snow
