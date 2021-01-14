#include <iostream>
#include <string.h>
#include "random_password_generator/requires.h"

using namespace std;

/*
 * Random Password Generator = rp9
 */
int main(int argc, char* argv[]) {

  int characters;
  string take_mood = "";
  int i;
  for (i = 0 ; i < argc ; ++i) {

    if (argc == 1) {
      sys_error();
      cout << RED << "please enter a command(after rp9).\n"
           "for see the all command : $ rp9 help\n";
    }
    //version
    else if (((strcmp(argv[1], "-v")) == 0) ||
             ((strcmp(argv[1], "--version")) == 0) ||
             ((strcmp(argv[1], "version")) == 0)) {

      version();
      sys_ok();
      break;
    }
    //help
    else if (((strcmp(argv[1], "-h")) == 0) ||
             ((strcmp(argv[1], "--help")) == 0) ||
             ((strcmp(argv[1], "help")) == 0)) {

      help();
      sys_ok();
      break;
    }
    //////custom_password_maker(int unit,string mood)
    else if (((strcmp(argv[1], "custom")) == 0) ||
             ((strcmp(argv[1], "-C")) == 0)) {
      string mood = "";
      if (argc == 2) {
        characters = 16;
        cout << YEL << "The default is <16> characters" << WHT << endl;
        cout << YEL << "Enter your Keyboard-letters : " << WHT; cin >> mood; cout << endl;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }


      else if (((strcmp(argv[2], "8")) == 0)) {
        characters = 8;
        cout << YEL << "\t<8> characters" << WHT << endl;
        cout << YEL << "Enter your Keyboard-letters : " << WHT; cin >> mood; cout << endl;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "16")) == 0)) {
        characters = 16;
        cout << YEL << "\t<16> characters" << WHT << endl;
        cout << YEL << "Enter your Keyboard-letters : " << WHT; cin >> mood; cout << endl;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "32")) == 0)) {
        characters = 32;
        cout << YEL << "\t<32> characters" << WHT << endl;
        cout << YEL << "Enter your Keyboard-letters : " << WHT; cin >> mood; cout << endl;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "LENGTH")) == 0) ||
               ((strcmp(argv[2], "length")) == 0) ||
               ((strcmp(argv[2], "-len")) == 0)) {

        cout << YEL << "How many characters do you want your password to be?" << WHT; cin >> characters;
        cout << YEL << "<" << characters << "> characters" << WHT << endl;
        cout << YEL << "Enter your Keyboard-letters : " << WHT; cin >> mood; cout << endl;
        take_mood = custom_password_maker(characters, mood);
        cout << take_mood;
        sys_ok();
        break;
        /*
         * is test
        if(take_mood.size()<8){
          cout<<RED<<"Warning:\n\tThis password is not secure because it is less than 8 characters long\n";
          cout <<YEL<<"\t<"<<take_mood.size()<<"> characters"<<WHT<<endl;
          cout<<take_mood;
          sys_ok();
          break;
        }
        else if(take_mood.size()==8){
          cout<<YEL<<"Medium safety\n";
          cout <<YEL<<"\t<"<<take_mood.size()<<"> characters"<<WHT<<endl;
          cout<<take_mood;
          sys_ok();
          break;
        }
        else if(take_mood.size()<=256){
          cout<<GRN<<"Superb safety\n";
          cout <<YEL<<"\t<"<<take_mood.size()<<"> characters"<<WHT<<endl;
          cout<<take_mood;
          sys_ok();
          break;
        }
        else{
          cout<<RED<<"Error :letters must be in English.";
          sys_error();
          break;
        }
        *
        *///
      } else {
        cout << RED << "Error :syintax error.";
        sys_error();
        break;
      }

    }
    //////////////////////////////

    else if (((strcmp(argv[1], "all")) == 0) ||
             ((strcmp(argv[1], "-ulns")) == 0) ||
             ((strcmp(argv[1], "upperlowernumbersign")) == 0) ||
             ((strcmp(argv[1], "-a")) == 0)) {
      string mood = uppercase + lowercase + number + sign;
      if (argc == 2) {
        cout << YEL << "The default is <16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }


      else if (((strcmp(argv[2], "8")) == 0)) {
        cout << YEL << "\t<8> characters" << WHT << endl;
        characters = 8;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "16")) == 0)) {
        cout << YEL << "\t<16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "32")) == 0)) {
        cout << YEL << "\t<32> characters" << WHT << endl;
        characters = 32;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "LENGTH")) == 0) ||
               ((strcmp(argv[2], "length")) == 0) ||
               ((strcmp(argv[2], "-len")) == 0)) {
        cout << YEL << "How many characters do you want your password to be?" << WHT; cin >> characters;
        take_mood = custom_password_maker(characters, mood);
        cout << take_mood;
        sys_ok();
        break;
      } else {
        cout << RED << "Error :syintax error.";
        sys_error();
        break;
      }
    }
    ///////////////////////////////////////
    else if (((strcmp(argv[1], "upper")) == 0) ||
             ((strcmp(argv[1], "-u")) == 0)) {
      string mood = uppercase;
      if (argc == 2) {
        cout << YEL << "The default is <16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }


      else if (((strcmp(argv[2], "8")) == 0)) {
        cout << YEL << "\t<8> characters" << WHT << endl;
        characters = 8;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "16")) == 0)) {
        cout << YEL << "\t<16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "32")) == 0)) {
        cout << YEL << "\t<32> characters" << WHT << endl;
        characters = 32;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "LENGTH")) == 0) ||
               ((strcmp(argv[2], "length")) == 0) ||
               ((strcmp(argv[2], "-len")) == 0)) {
        cout << YEL << "How many characters do you want your password to be?" << WHT; cin >> characters;
        take_mood = custom_password_maker(characters, mood);
        cout << take_mood;
        sys_ok();
        break;
      } else {
        cout << RED << "Error :syintax error.";
        sys_error();
        break;
      }

    }
    ///////////////////////////////////////
    else if (((strcmp(argv[1], "lower")) == 0) ||
             ((strcmp(argv[1], "-l")) == 0)) {
      string mood = lowercase();
      if (argc == 2) {
        cout << YEL << "The default is <16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }


      else if (((strcmp(argv[2], "8")) == 0)) {
        cout << YEL << "\t<8> characters" << WHT << endl;
        characters = 8;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "16")) == 0)) {
        cout << YEL << "\t<16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "32")) == 0)) {
        cout << YEL << "\t<32> characters" << WHT << endl;
        characters = 32;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "LENGTH")) == 0) ||
               ((strcmp(argv[2], "length")) == 0) ||
               ((strcmp(argv[2], "-len")) == 0)) {
        cout << YEL << "How many characters do you want your password to be?" << WHT; cin >> characters;
        take_mood = custom_password_maker(characters, mood);
        cout << take_mood;
        sys_ok();
        break;
      } else {
        cout << RED << "Error :syintax error.";
        sys_error();
        break;
      }
    }
    //////////////////////////////

    else if (((strcmp(argv[1], "number")) == 0) ||
             ((strcmp(argv[1], "-n")) == 0)) {
      string mood = number();
      if (argc == 2) {
        cout << YEL << "The default is <16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }


      else if (((strcmp(argv[2], "8")) == 0)) {
        cout << YEL << "\t<8> characters" << WHT << endl;
        characters = 8;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "16")) == 0)) {
        cout << YEL << "\t<16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "32")) == 0)) {
        cout << YEL << "\t<32> characters" << WHT << endl;
        characters = 32;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "LENGTH")) == 0) ||
               ((strcmp(argv[2], "length")) == 0) ||
               ((strcmp(argv[2], "-len")) == 0)) {
        cout << YEL << "How many characters do you want your password to be?" << WHT; cin >> characters;
        take_mood = custom_password_maker(characters, mood);
        cout << take_mood;
        sys_ok();
        break;
      } else {
        cout << RED << "Error :syintax error.";
        sys_error();
        break;
      }
    }
    //////////////////////////////
    else if (((strcmp(argv[1], "sign")) == 0) ||
             ((strcmp(argv[1], "-s")) == 0)) {
      string mood = sign();
      if (argc == 2) {
        cout << YEL << "The default is <16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }


      else if (((strcmp(argv[2], "8")) == 0)) {
        cout << YEL << "\t<8> characters" << WHT << endl;
        characters = 8;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "16")) == 0)) {
        cout << YEL << "\t<16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "32")) == 0)) {
        cout << YEL << "\t<32> characters" << WHT << endl;
        characters = 32;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "LENGTH")) == 0) ||
               ((strcmp(argv[2], "length")) == 0) ||
               ((strcmp(argv[2], "-len")) == 0)) {
        cout << YEL << "How many characters do you want your password to be?" << WHT; cin >> characters;
        take_mood = custom_password_maker(characters, mood);
        cout << take_mood;
        sys_ok();
        break;
      } else {
        cout << RED << "Error :syintax error.";
        sys_error();
        break;
      }
    }
    //////////////////////////////
    else if (((strcmp(argv[1], "upperlower")) == 0) ||
             ((strcmp(argv[1], "-ul")) == 0)) {
      string mood = uppercase + lowercase;
      if (argc == 2) {
        cout << YEL << "The default is <16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }


      else if (((strcmp(argv[2], "8")) == 0)) {
        cout << YEL << "\t<8> characters" << WHT << endl;
        characters = 8;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "16")) == 0)) {
        cout << YEL << "\t<16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "32")) == 0)) {
        cout << YEL << "\t<32> characters" << WHT << endl;
        characters = 32;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "LENGTH")) == 0) ||
               ((strcmp(argv[2], "length")) == 0) ||
               ((strcmp(argv[2], "-len")) == 0)) {
        cout << YEL << "How many characters do you want your password to be?" << WHT; cin >> characters;
        take_mood = custom_password_maker(characters, mood);
        cout << take_mood;
        sys_ok();
        break;
      } else {
        cout << RED << "Error :syintax error.";
        sys_error();
        break;
      }
    }
    //////////////////////////////
    else if (((strcmp(argv[1], "upperlowernumber")) == 0) ||
             ((strcmp(argv[1], "-uln")) == 0)) {
      string mood = uppercase + lowercase + number;
      if (argc == 2) {
        cout << YEL << "The default is <16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }


      else if (((strcmp(argv[2], "8")) == 0)) {
        cout << YEL << "\t<8> characters" << WHT << endl;
        characters = 8;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "16")) == 0)) {
        cout << YEL << "\t<16> characters" << WHT << endl;
        characters = 16;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "32")) == 0)) {
        cout << YEL << "\t<32> characters" << WHT << endl;
        characters = 32;
        take_mood = custom_password_maker(characters, mood);
        cout << take_mood;
        sys_ok();
        break;
      }

      else if (((strcmp(argv[2], "LENGTH")) == 0) ||
               ((strcmp(argv[2], "length")) == 0) ||
               ((strcmp(argv[2], "-len")) == 0)) {
        cout << YEL << "How many characters do you want your password to be?" << WHT; cin >> characters;
        cout << custom_password_maker(characters, mood);
        sys_ok();
        break;
      } else {
        cout << RED << "Error :syintax error.";
        sys_error();
        break;
      }
    }
    //////////////////////////////
    else if (((strcmp(argv[1], "leet")) == 0) ||
             ((strcmp(argv[1], "1337")) == 0) ||
             ((strcmp(argv[1], "LEET")) == 0)) {
      string mood = "";
      if (argc == 2) {

        cout << YEL << "Enter your Keyboard-letters : " << WHT; cin >> mood; cout << endl;
        string LEET = Leet_password(mood);

        if (LEET.size() < 8) {
          cout << RED << "Warning:\n\tThis password is not secure because it is less than 8 characters long\n";
          cout << YEL << "\t<" << LEET.size() << "> characters" << WHT << endl;
          cout << LEET;
          sys_ok();

        } else if (LEET.size() == 8) {
          cout << YEL << "Medium safety\n";
          cout << YEL << "\t<" << LEET.size() << "> characters" << WHT << endl;
          cout << LEET;
          sys_ok();

        } else if (LEET.size() <= 16) {
          cout << GRN << "Superb safety\n";
          cout << YEL << "\t<" << LEET.size() << "> characters" << WHT << endl;
          cout << LEET;
          sys_ok();
        } else if (LEET.size() <= 50) {
          cout << GRN << "Superb safety\n";
          cout << YEL << "\t<" << LEET.size() << "> characters" << WHT << endl;
          cout << LEET;
          sys_ok();
        } else if (LEET.size() > 50) {
          cout << YEL << "\t<" << LEET.size() << "> characters" << WHT << endl;
          cout << RED << "Error : letters should not exceed 50\n";
          sys_error();
        } else {
          cout << RED << "Error : letters must be in English.";
          sys_error();
        }

        break;
      }
    }
    //////////////////////////////
    else {
      cout << RED << "Error :syintax error.";
      sys_error();
      break;
    }

  }
  return 0;
}
