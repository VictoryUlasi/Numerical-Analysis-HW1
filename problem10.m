close all;
clear,clc;

%randomNum = randi(100);
randomNum = 42;
userGuess = str2double(input("", "s"));
%tries = 1;


while (userGuess ~= randomNum)

    if (userGuess < randomNum)
        fprintf("Higher!\n");
    elseif(userGuess > randomNum)
        fprintf("Lower!\n");
    end
    userGuess = str2double(input("","s"));
%tries = tries + 1;
end

 fprintf("Correct!\n");