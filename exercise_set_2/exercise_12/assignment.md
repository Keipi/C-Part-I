Purpose of this exercise: process a stream and use an appropriate for-statement.
Write a program reverse showing a prompt (use a question mark followed by a blank) and then reads a line of text from the standard input stream. If the line is empty, or if the end of the standard inut is reached (realized by providing ctrl-d the program ends. Otherwise it displays to the standard output the reversed text line.

The conversation could be:


    ? There must be some way out of here
    ereh fo tuo yaw emos eb tsum erehT
    ? Said the joker to the thief
    feiht eht ot rekoj eht diaS
    ?                               (empty line or ctrl-d to end the program)
    
Submit your source file.

Hints:

when incrementing a reverse iterator it refers to its previous element;
If revIt is a reverse iterator, then *revIt provides you with the element revIt refers to.
