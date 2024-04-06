#include <iostream>
#include <string>
#include "operators.h"
using namespace std;

int main(int argc, char* argv[]){
  string choices[2] = {"add","subtract"};
  string option (argv[1]);
  if (option == "add"){
    float ans = add(argc,argv);
    cout << ans << endl;
  } else if (option == "subtract"){
    float ans = take_away(argc,argv);
    cout << ans << endl;
  } else if (option == "divide"){
    float ans = divide(argc,argv);
    cout << ans;
  } else if (option == "multiply"){
    float ans = multiply(argc,argv);
    cout << ans;
  } else if (option == "stdtonum"){
    float ans = std_form_to_num(argc,argv);
    cout << ans;
  }

  
}
