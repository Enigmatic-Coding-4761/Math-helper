#include <iostream>
#include "operators.h"
using namespace std;

int main(int argc, char* argv[]){
  string option (argv[1]);
  if (option == "add"){
    cout << add(argc,argv);
  }
}
