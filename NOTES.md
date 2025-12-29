# Receiving IO data from the user


When receiving data from the user in the terminal, we need to have in the safest 
way we can do, because we can assume that the user does not gonna know how to 
correctly use our system, and how to communicate with the system. For this, we can use 
the fgets function, because provides the most save way to receive the data input from the 
user, and prevent for errors like buffer overflow from happen