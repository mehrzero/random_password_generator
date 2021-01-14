#include "wrong.h"
#include "colors.h"

#include <iostream>

using namespace std;

void sys_error(){

    /*
     * error
     */
     cout<<endl;
     cout<<RED;
     LOGO();
     cout<<endl<<"\trp9|ERROR ! \n";

 }

void sys_ok(){

     /*
      * no error
      */
     cout<<endl;
	 cout<<GRN;
     LOGO();
     cout<<endl<<"\trp9|OK ! \n";
 }
