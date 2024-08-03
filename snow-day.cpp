for (int i = 0; i < hours; ++i) {
    float snow_fallen = snow_fall_rate - snow_melting_rate * snow_on_ground;
    float remaining_snow = snow_on_ground + (snow_fallen >= 0 ? snow_fallen : 0);
    snow_on_ground = (1 - snow_melting_rate) * remaining_snow; // Corrected calculation
}

std::cout << std::setprecision(14) << snow_on_ground << std::endl;