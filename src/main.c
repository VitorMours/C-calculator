#include <stdio.h>
#include <stdlib.h>
#include "../include/calculator.h"

/*
 * Program: Terminal Calculator
 * Author: Joao Vitor Rezende Moura
 * 
 * This program was developed with the objective to 
 * simulate a calculator inside of the terminal of the 
 * linux operation system
 * */

// Registering the functions to be called

void show_options();
void clear_terminal();
void receive_choice();

int main(){
  clear_terminal();
  printf("\nStarting calculator, choose a option:\n");
  show_options();
  receive_choice();
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


void receive_choice(){

  char buffer[4];
  float result;
  printf("\nDigite a  sua escolha: ");

  // fgets(onde_salvar, tamanho_maximo, de_onde_ler)
  if(fgets(buffer, sizeof(buffer), stdin) != NULL){

    // TODO: Vou precisar tambem passar o valor do fgets para dentro da funcao para resultar o valor
    result = start_calculator(buffer);
  }
  printf("\nO resultado achado foi: %f\n", result);
}

