#include "random_password_generator/colors.h"
#include "random_password_generator/logo.hpp"
#include "random_password_generator/wrong.h"

#include <iostream>

using namespace std;

void sys_error() {

  /*
   * error
   */
  cout << endl;
  cout << core::colors::red;
  LOGO();
  cout << endl << "\trp9|ERROR ! \n";

}

void sys_ok() {

  /*
   * no error
   */
  cout << endl;
  cout << core::colors::green;
  LOGO();
  cout << endl << "\trp9|OK ! \n";
}
