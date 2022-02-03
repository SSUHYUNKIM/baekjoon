#include <stdio.h>
#include <string.h>

int main(){
  char *color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
  int mul[10] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
  int i;
  long long result = 0;
  char input[10];
  int temp[3];

  for(i = 0; i < 3; i++){
    scanf("%s", input);
    if(strcmp(input, "black") == 0){
      temp[i] = 0;}
    else if(strcmp(input, "brown") == 0){
      temp[i] = 1;}
    else if(strcmp(input, "red") == 0){
      temp[i] = 2;}
    else if(strcmp(input, "orange") == 0){
      temp[i] = 3;}
    else if(strcmp(input, "yellow") == 0){
      temp[i] = 4;}
    else if(strcmp(input, "green") == 0){
      temp[i] = 5;}
    else if(strcmp(input, "blue") == 0){
      temp[i] = 6;}
    else if(strcmp(input, "violet") == 0){
      temp[i] = 7;}
    else if(strcmp(input, "grey") == 0){
      temp[i] = 8;}
    else if(strcmp(input, "white") == 0){
      temp[i] = 9;}
  }

  result = temp[0] * 10 + temp[1];
  result = result * mul[temp[2]];
  printf("%lld", result);
  return 0;
}