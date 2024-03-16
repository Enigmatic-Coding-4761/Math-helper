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


#endif
