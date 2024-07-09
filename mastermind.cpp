{
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++)
        if(mastermind[i] == guess[i])
            black++;
        else if(std::find(guess.begin(), guess.end(), mastermind[i]) != guess.end())
            white++;

    return {white, black};