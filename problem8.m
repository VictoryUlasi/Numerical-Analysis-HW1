close all;
clear,clc;

str = input("Enter N: ","s");
n = sscanf(str,"%d");
s = 1;
fact = 1;

if(n >= 0)

    for i = 1:n
        fact = fact * i;
        s = s +(1/fact);
    end
end

fprintf("Series sum S = %.10f\n", s);