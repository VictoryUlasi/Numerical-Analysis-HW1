close all;
clear,clc;

%randomNum = randi(100);
randomNum = 42;
userGuess = sscanf(input("Enter guess: ","s"), "%d");
%tries = 1;


while (userGuess ~= randomNum)

    if (userGuess < randomNum)
        userGuess = sscanf(input("Higher!\n ","s"), "%d");
    elseif(userGuess > randomNum)
        userGuess = sscanf(input("Lower!\n ","s"), "%d");
    end
%tries = tries + 1;
end

 fprintf("Correct!\n");