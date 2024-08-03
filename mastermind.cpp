int getHint(string s1, string s2) {
    int white = 0;
    int black = 0;

    map<char,int> m1,m2;

    for(int i=0;i<4;++i)
        if(s1[i]==s2[i])
            ++black;
        else{
            ++m1[s1[i]];
            ++m2[s2[i]];
        }

    for(int i=0;i<4;++i)
        if(m1.count(s2[i]) && m1[s2[i]] > 0 && m2[s2[i]] > 0){
            white++;
            --m1[s2[i]];
            --m2[s2[i]];
        }

    return to_string(black) + "A" + to_string(white) + "B";
}