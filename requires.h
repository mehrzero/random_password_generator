using namespace std ;
////////////////////////
    //color zone
////////////////////////

#define NRM  "\x1B[0m"
#define RED  "\x1B[31m"
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define MAG  "\x1B[35m"
#define CYN  "\x1B[36m"
#define WHT  "\x1B[37m"

////////////////////////
    //color zone ended
////////////////////////
#include "LOGO.cxx"
#include "help.cxx"
#include "version.cxx"
#include "wrong.cxx"
#include "keyboard_letters.cxx"
#include "password_maker.cxx"
#include "Leet_password.cxx"
////////////////////////
void LOGO();

void help();

void version();

void sys_error();
void sys_ok();

string uppercase();
string lowercase();
string number();
string sign();

string custom_password_maker(int unit,string mood);//custom

string Leet_password(string leeter);
