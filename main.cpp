#include <iostream>
#include <string>
#include "operators.h"
using namespace std;

int main(int argc, char* argv[]){
  string choices[2] = {"add","subtract"};
  string option (argv[1]);
  if (option == "add"){
    float ans = add(argc,argv);
    cout << ans;
  } else if (option == "subtract"){
    float ans = take_away(argc,argv);
    cout << ans;
  } 

  
}
