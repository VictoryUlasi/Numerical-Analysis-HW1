close all;
clear,clc;

a = input("Enter side a: "); 
b = input("Enter side b: "); 
c = input("Enter side c: ");

sides = sort([a, b, c]);

a = sides(1);
b = sides(2);
c = sides(3);

if ((a + b > c) && (a + c >b) && (b + c >a))

    if ((a == b) && (b == c))
        fprintf("Equilateral ");
    elseif ((a == b) || (a == c) || (b == c))
        fprintf("Isosceles ");
    else
        fprintf("Scalene ");
    end

    
    a = a*a;
    b = b*b;
    c = c*c;
    difference = (a+b)-c;

    if (abs(difference) < 1e-4 )
        fprintf("right triangle.\n"); 
    elseif ((difference) > 0)
        fprintf("acute triangle.\n");
    else
        fprintf("obtuse triangle.\n");
    end
else
    
    fprintf("Not a valid triangle.\n"); 
end
