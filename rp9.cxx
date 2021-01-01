#include <iostream>
#include <string.h>
#include "requires.h"
/*
 * Random Password Generator = rp9
 */
int main(int argc , char *argv[]){

	int characters;
	int i;
	for ( i = 0 ; i < argc ; ++i ){
	
		if(argc == 1){
				sys_error();
				cout<<RED<<"please enter a command(after rp9).\n"
						   "for see the all command : $ rp9 help\n";	
			}
		//version
		else if(((strcmp(argv[1], "-v"))==0)||
				((strcmp(argv[1], "--version"))==0)||
				((strcmp(argv[1], "version"))==0)){
		
        version();
        sys_ok();
        break;
		}
		//help
		else if(((strcmp(argv[1], "-h"))==0)||
				((strcmp(argv[1], "--help"))==0)||
				((strcmp(argv[1], "help"))==0)){
		
        help();
        sys_ok();
        break;
		}
		//////custom_password_maker(int unit,string mood)
		else if(((strcmp(argv[1], "custom"))==0)||
				((strcmp(argv[1], "-C"))==0)){
			string mood="";
			if(argc == 2){
				characters=16;
				cout <<YEL<<"The default is <16> characters"<<WHT<<endl;
				cout <<YEL<<"Enter your Keyboard-letters : "<<WHT;cin >>mood;cout<<endl;
				cout<<custom_password_maker(characters, mood);	
				sys_ok();
				break;	
			}
			
			
			else if(((strcmp(argv[2], "8"))==0)){
				characters=8;
				cout <<YEL<<"<8> characters"<<WHT<<endl;	
				cout <<YEL<<"Enter your Keyboard-letters : "<<WHT;cin >>mood;cout<<endl;
				cout<<custom_password_maker(characters, mood);	
				sys_ok();
				break;	
				}
			
			else if(((strcmp(argv[2], "16"))==0)){
				characters=16;
				cout <<YEL<<"<16> characters"<<WHT<<endl;	
				cout <<YEL<<"Enter your Keyboard-letters : "<<WHT;cin >>mood;cout<<endl;
				cout<<custom_password_maker(characters, mood);
				sys_ok();
				break;	
			}
			
			else if(((strcmp(argv[2], "32"))==0)){
				characters=32;
				cout <<YEL<<"<32> characters"<<WHT<<endl;	
				cout <<YEL<<"Enter your Keyboard-letters : "<<WHT;cin >>mood;cout<<endl;
				cout<<custom_password_maker(characters, mood);
				sys_ok();
				break;	
			}
			
			else if(((strcmp(argv[2], "take"))==0)||((strcmp(argv[2], "-t"))==0)){
				characters=8;
				cout <<YEL<<"How many characters do you want your password to be?"<<WHT;cin >>characters;	
				cout <<YEL<<"<"<<characters<<"> characters"<<WHT<<endl;	
				cout <<YEL<<"Enter your Keyboard-letters : "<<WHT;cin >>mood;cout<<endl;
				cout<<custom_password_maker(characters, mood);
				sys_ok();
				break;	
			}
		
		}
		//////////////////////////////
		
		else if(((strcmp(argv[1], "all"))==0)||
		        ((strcmp(argv[1], "-ulns"))==0)||
		        ((strcmp(argv[1], "upperlowernumbersign"))==0)||	
				((strcmp(argv[1], "-a"))==0)){
			string mood=uppercase()+lowercase()+number()+sign();		
			if(argc == 2){
			cout <<YEL<<"The default is <16> characters"<<WHT<<endl;	
			characters=16;
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			
			else if(((strcmp(argv[2], "8"))==0)){
			cout <<YEL<<"<8> characters"<<WHT<<endl;
			characters=8;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "16"))==0)){
			cout <<YEL<<"<16> characters"<<WHT<<endl;	
			characters=16;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "32"))==0)){
			cout <<YEL<<"<32> characters"<<WHT<<endl;	
			characters=32;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "take"))==0)||
					((strcmp(argv[2], "-t"))==0)){
			cout <<YEL<<"How many characters do you want your password to be?"<<WHT;cin >>characters;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
		}
		///////////////////////////////////////
		else if(((strcmp(argv[1], "upper"))==0)||
				((strcmp(argv[1], "-u"))==0)){
			string mood=uppercase();		
			if(argc == 2){
			cout <<YEL<<"The default is <16> characters"<<WHT<<endl;	
			characters=16;
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			
			else if(((strcmp(argv[2], "8"))==0)){
			cout <<YEL<<"<8> characters"<<WHT<<endl;
			characters=8;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "16"))==0)){
			cout <<YEL<<"<16> characters"<<WHT<<endl;	
			characters=16;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "32"))==0)){
			cout <<YEL<<"<32> characters"<<WHT<<endl;	
			characters=32;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "take"))==0)||
					((strcmp(argv[2], "-t"))==0)){
			cout <<YEL<<"How many characters do you want your password to be?"<<WHT;cin >>characters;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
		
		}
		///////////////////////////////////////
		else if(((strcmp(argv[1], "lower"))==0)||
				((strcmp(argv[1], "-l"))==0)){
			string mood=lowercase();		
			if(argc == 2){
			cout <<YEL<<"The default is <16> characters"<<WHT<<endl;	
			characters=16;
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			
			else if(((strcmp(argv[2], "8"))==0)){
			cout <<YEL<<"<8> characters"<<WHT<<endl;
			characters=8;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "16"))==0)){
			cout <<YEL<<"<16> characters"<<WHT<<endl;	
			characters=16;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "32"))==0)){
			cout <<YEL<<"<32> characters"<<WHT<<endl;	
			characters=32;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "take"))==0)||
					((strcmp(argv[2], "-t"))==0)){
			cout <<YEL<<"How many characters do you want your password to be?"<<WHT;cin >>characters;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
		}
		//////////////////////////////
		
		else if(((strcmp(argv[1], "number"))==0)||
				((strcmp(argv[1], "-n"))==0)){
			string mood=number();		
			if(argc == 2){
			cout <<YEL<<"The default is <16> characters"<<WHT<<endl;	
			characters=16;
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			
			else if(((strcmp(argv[2], "8"))==0)){
			cout <<YEL<<"<8> characters"<<WHT<<endl;
			characters=8;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "16"))==0)){
			cout <<YEL<<"<16> characters"<<WHT<<endl;	
			characters=16;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "32"))==0)){
			cout <<YEL<<"<32> characters"<<WHT<<endl;	
			characters=32;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "take"))==0)||
					((strcmp(argv[2], "-t"))==0)){
			cout <<YEL<<"How many characters do you want your password to be?"<<WHT;cin >>characters;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
		}
		//////////////////////////////
		else if(((strcmp(argv[1], "sign"))==0)||
				((strcmp(argv[1], "-s"))==0)){
			string mood=sign();		
			if(argc == 2){
			cout <<YEL<<"The default is <16> characters"<<WHT<<endl;	
			characters=16;
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			
			else if(((strcmp(argv[2], "8"))==0)){
			cout <<YEL<<"<8> characters"<<WHT<<endl;
			characters=8;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "16"))==0)){
			cout <<YEL<<"<16> characters"<<WHT<<endl;	
			characters=16;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "32"))==0)){
			cout <<YEL<<"<32> characters"<<WHT<<endl;	
			characters=32;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "take"))==0)||
					((strcmp(argv[2], "-t"))==0)){
			cout <<YEL<<"How many characters do you want your password to be?"<<WHT;cin >>characters;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
		}
		//////////////////////////////
		else if(((strcmp(argv[1], "upperlower"))==0)||
				((strcmp(argv[1], "-ul"))==0)){
			string mood=uppercase()+lowercase();		
			if(argc == 2){
			cout <<YEL<<"The default is <16> characters"<<WHT<<endl;	
			characters=16;
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			
			else if(((strcmp(argv[2], "8"))==0)){
			cout <<YEL<<"<8> characters"<<WHT<<endl;
			characters=8;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "16"))==0)){
			cout <<YEL<<"<16> characters"<<WHT<<endl;	
			characters=16;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "32"))==0)){
			cout <<YEL<<"<32> characters"<<WHT<<endl;	
			characters=32;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "take"))==0)||
					((strcmp(argv[2], "-t"))==0)){
			cout <<YEL<<"How many characters do you want your password to be?"<<WHT;cin >>characters;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
		}
		//////////////////////////////
		else if(((strcmp(argv[1], "upperlowernumber"))==0)||
				((strcmp(argv[1], "-uln"))==0)){
			string mood=uppercase()+lowercase()+number();		
			if(argc == 2){
			cout <<YEL<<"The default is <16> characters"<<WHT<<endl;	
			characters=16;
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			
			else if(((strcmp(argv[2], "8"))==0)){
			cout <<YEL<<"<8> characters"<<WHT<<endl;
			characters=8;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "16"))==0)){
			cout <<YEL<<"<16> characters"<<WHT<<endl;	
			characters=16;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "32"))==0)){
			cout <<YEL<<"<32> characters"<<WHT<<endl;	
			characters=32;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
			
			else if(((strcmp(argv[2], "take"))==0)||
					((strcmp(argv[2], "-t"))==0)){
			cout <<YEL<<"How many characters do you want your password to be?"<<WHT;cin >>characters;	
			cout<<custom_password_maker(characters, mood);
			sys_ok();
			break;	
			}
		}
		
	}
	return 0; 
}
