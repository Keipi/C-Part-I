Purpose of this exercise: learn to use if statements.
Consider the folllowing statement (its layout is incorrect, which is part of the exercise)


    if (first == test1) if (second == test2) value = 5; else value = 6;
    
describe in your own words how the compiler interprets this statement;
  - the else statement is executed if the second statement is else.
  - else associated with nearest if 
rewrite this statement using the correct layout (no additional syntax elements may be used);
  - if (first == test)
  -   if (second == test2)
  -     value = 5;
  -   else
  -     value = 6; 
instead of the interpretation as used by the compiler: how would you change the statement so that the `non-default' interpretation is used?
  - add {}'s so that the else statement is executed if the first test is false
describe in your own words how your changed statement is interpreted
  - see above
there is a flaw in the way the original statement was formulated. What is the flaw and how to fix it?
  - 
