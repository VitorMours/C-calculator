#include "../include/calculator.h"
#include <stdlib.h>
#include <stdio.h>

float sum(float a, float b){
    float result = a + b;
    return result;
}

float subtract(float a, float b){
    float result = a - b;
    return result;
}

float divides(float a, float b){
    float result = a / b; 
    return result;
}

float times(float a, float b){
    float result = a * b;
    return result;
}

float start_calculator(char *buffer){
  

  char a_char[10];
  char b_char[10];
  float a = 0;
  float b = 0;
  float result = 0;


  printf("Digite o primeiro numero: ");
  if(fgets(a_char, sizeof(a_char), stdin) != NULL){
    a = atof(a_char); 
  }

  printf("Digite o segundo numero: ");
  if(fgets(b_char, sizeof(b_char), stdin) != NULL){
    b = atof(b_char);
  }

  switch(*buffer){
    case '1':
      result = sum(a, b);
      break;
    case '2':
      result = subtract(a, b);
      break;
    case '3':
      result = times(a, b);
      break;
    case '4':
      result = divides(a, b);
      break;
    default:
      printf("\nO valor que foi digitado nao esta dentro das alternativas possibilitadas");
      break;
  }
  return result;
}
