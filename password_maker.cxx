#include "password_maker.h"

using namespace std;

//int unit
//string mood
//////////////////////
string custom_password_maker(const int unit, const string& mood) {

	string pass="";
    int size = mood.size() - 1;

    srand(time(0));
    for(int a = 0; a < unit; a++) {
       pass+=mood[rand() % size];
    }
	
	return pass;
}
////////////////////////////////
