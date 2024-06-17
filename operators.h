#include <iostream>

#ifndef operators
#define operators

float add(int argc, char* argv[]){
  float conv_argv[argc];
  for (int i = 2;i < argc;i++){
    float tmp = std::stof(argv[i]);
    conv_argv[i] = tmp;
  }
  float tmp = conv_argv[2] + conv_argv[3];

  for (int i = 4;i < argc;i++){
    tmp = tmp + conv_argv[i];
  }
  return tmp;
}


float take_away(int argc,char* argv[]){
  float conv_argv[argc];
  for (int i = 2;i<argc;i++){
    float tmp = std::stof(argv[i]);
    conv_argv[i] = tmp;
  }
  float tmp = conv_argv[2] - conv_argv[3];
  for (int i = 4;i < argc;i++){
    tmp = tmp - conv_argv[i];
  }
  return tmp;
}

float divide(int argc, char* argv[]){
  float conv_argv[argc];
  for (int i = 2; i < argc; i++){
    float tmp = std::stof(argv[i]);
    conv_argv[i] = tmp;
  }
  float tmp = conv_argv[2] / conv_argv[3];
  for (int i = 4; i < argc; i++){
    tmp = tmp / conv_argv[i];
  }
  return tmp;
}
float multiply(int argc, char* argv[]){
  float conv_argv[argc];
  for (int i = 2; i < argc; i++){
    float tmp = std::stof(argv[i]);
    conv_argv[i] = tmp;
  }
  float tmp =  conv_argv[2] * conv_argv[3];
 for (int i = 4; i < argc;i++){
  tmp *= conv_argv[i];
  }
  return tmp;

}

float std_form_to_num(int argc, char* argv[]){
  float num = std::stof(argv[2]);
  float ammout_of_powers = std::stof(argv[3]);
  std::cout << ammout_of_powers << std::endl;
  if (ammout_of_powers > 0){
    for (int i = 0; i < ammout_of_powers; i++){
      num *= 10;
    }
  } else if (ammout_of_powers < 0){
    for (int i = ammout_of_powers; i < 0; i++){
      num /= 10;
    }
  }
  return num;
}
void numtostd(double number, int power){
  double num = number;
  if (num >= 1 && num < 10){
    std::cout << num << " X10^" << power; 

    return;
  }
  if (num >= 10 ){
    power = power + 1;
    num /= 10;
    numtostd(num, power);
  }
  if (num < 1){
    power--;
    num *= 10;
    numtostd(num, power);
  }
}
#endif
