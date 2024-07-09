double distance = sqrt(std::pow(std::accumulate(&v2[0], &v2[n], 0.0, 
                                         [&](float a, float b){return std::pow((b - a), 2);}), 1.0 / 2.0));