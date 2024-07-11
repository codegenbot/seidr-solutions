float snowDay(int hours, float groundSnow, float rate, float melt) {
    int r_int = (int)(rate * 100); 
    int m_int = (int)(melt * 100);
    return ((groundSnow + r_int / 100.0 * hours - m_int / 100.0 * hours));
}