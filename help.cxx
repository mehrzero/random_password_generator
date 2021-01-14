#include "help.h"

#include <iostream>

void help() {
  using namespace std;
  
  cout<<WHT<<endl;
  cout<<YEL<<" LOGO"<<WHT<<endl;
  cout<<"\t  █▀█ █▀█ █▀█\n";
  cout<<"\t  █▀▄ █▀▀ ▀▀█\n";
  cout<<YEL<<" NAME"<<WHT<<endl;
  cout<<GRN<<"\trp9 - Random Password Generator"<<WHT<<endl;
  cout<<YEL<<" SYNOPSIS"<<WHT<<endl;
  cout<<GRN<<"\t~$ rp9 [OPTION]... [LENGTH]"<<WHT<<endl;
  cout<<YEL<<" DESCRIPTION :"<<WHT<<endl;
  cout<<GRN<<"\tUsing uppercase and lowercase letters, numbers, symbols(sign),\n\t you can create your own password with any number of characters you want. \n"
        
        "\tHelp :\n"
        "\t~$ rp9 [-h , --help , help]\n"
        "OPTION :\n"
        "\t-C , custom\n"
        "\t>\n"
        "\t-a , all\n"
        "\t> Creates a random password using all the characters on the keyboard.\n"
        "\t-u , upper\n"
        "\t> Makes random passwords using uppercase English letters.\n"
        "\t-l , lower\n"
        "\t> Makes random passwords using lowercase English letters.\n"
        "\t-n , number\n"
        "\t> Generates random passwords using numbers.\n"
        "\t-s , sign\n"
        "\t> Generate random passwords using the sign.\n"
        "\t-ul , upperlower\n"
        "\t> Generates random passwords using uppercase and lowercase English letters.\n"
        "\t-uln , upperlowernumber\n"
        "\t> Generate random passwords using uppercase English letters and lowercase letters and numbers.\n"
        "\t-ulns , upperlowernumbersign\n"
        "\t> Generates random passwords using uppercase and lowercase, number, sign English letters.\n"
        "\tleet , 1337\n"
        "\t> Creates a password of type (LEET)\n"
        
        "LENGTH :\n"
        "\t8, 16, 32\n"
        "\t-len , LENGTH, length\n"
        ""
        "EXAMPLES :\n"
        "\t~$ rp9 all 16\n"
        "\t~$ rp9 -C -len\n"
        "\t~$ rp9 upper 32\n"
        "\t~$ rp9 1377\n"
                
        <<WHT<<endl;
}
