#include <stdio.h>
#include <stdlib.h>
/*
 * Program: Terminal Calculator
 * Author: Joao Vitor Rezende Moura
 * 
 * This program was developed with the objective to 
 * simulate a calculator inside of the terminal of the 
 * linux operation system
 * */


void show_options();
void clear_terminal();

int main(){
  clear_terminal();
  printf("\nStarting calculator, choose a option:\n");
  show_options();
  
  return 0;
}

void clear_terminal(){ 

  #if defined(_WIN32) || defined(_WIN64)
    system("cls");
  #else 
    system("clear");
  #endif
}

void show_options(){

  printf("\n+-------------------+");
  printf("\n|                   |");
  printf("\n| [1] - Sum         |");
  printf("\n| [2] - Subtraction |");
  printf("\n| [3] - Times       |");
  printf("\n| [4] - Division    |");
  printf("\n|                   |");
  printf("\n+-------------------+\n");
  
}
