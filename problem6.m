close all;
clear,clc;

str = input("Enter a numeric integer grade (0-100): ", "s");
grade = sscanf(str, "%d");

if (grade >= 90)
    letterGrade = 'A';
elseif (grade >= 80)
    letterGrade = 'B';
elseif (grade >= 70)
    letterGrade = 'C';
elseif (grade >= 60)
    letterGrade = 'D';
elseif (grade < 60)
    letterGrade = 'F';
end

if (grade < 60)
   fprintf("Letter Grade: %c\n", letterGrade); 
   return;
elseif (((mod(grade,10)) >= 5) || (grade == 100))
    letterGrade = strcat(letterGrade,'+');
else
    letterGrade = strcat(letterGrade,'-');
end

fprintf("Letter Grade: "); disp(letterGrade);
