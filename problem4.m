close all;
clear,clc;

a = input("Enter side a: "); 
b = input("Enter side b: "); 
c = input("Enter side c: ");
sides = transpose([a,b,c]);
sides = sort(sides);


if ((a + b > c) && (a + c >b) && (b + c >a))

    if ((a == b) && (b == c))
        fprintf("Equilateral ");
    elseif ((a == b) || (a == c) || (b == c))
        fprintf("Isosceles ");
    else
        fprintf("Scalene ");
    end

    sides = sides.^2;

    a = sides(1,1);
    b = sides(2,1);
    c = sides(3,1);

    if ((a+b) == c)
        fprintf("right triangle.\n"); 
    elseif ((a + b) > c)
        fprintf("acute triangle.\n");
    elseif ((a + b) < c)
        fprintf("obtuse triangle.\n");
    end
else
    
    fprintf("Not a valid triangle.\n"); 
end
