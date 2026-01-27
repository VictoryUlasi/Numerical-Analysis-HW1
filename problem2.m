close all;
clear,clc;

function [r1,r2] = compute(A)

discriminant = ((A(2,1)).^2 - (4) * (A(1,1)) * (A(3,1)));

if (discriminant < 0)
    fprintf("No real roots (discriminant < 0).\n"); 
    return;
elseif (discriminant == 0)
    root1 = (-A(2,1) + sqrt(discriminant)) / (2*(A(1,1)));
    fprintf("One real root: x = %.6f\n", root1); 
    return;
else
    r1 = (-A(2,1) + sqrt(discriminant)) / (2*(A(1,1)));
    r2 = (-A(2,1) - sqrt(discriminant)) / (2*(A(1,1)));

    fprintf("Two real roots:\n"); 
    fprintf("x1 = %.6f\n", r1); 
    fprintf("x2 = %.6f\n", r2);
end


end

a = input("Enter a: "); 
b = input("Enter b: "); 
c = input("Enter c: "); 

eq = [a,b,c];
eq = transpose(eq);

compute(eq);
