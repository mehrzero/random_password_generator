#include "leet_password.h"

using namespace std;

string leet_password(const string& letter) //standard_easy
{ 
	string fin;
	string Aleet[]={"4","/-\\","/\\","@","/\\","a","A"};//,"Д"
	string A="";
	///
	string Bleet[]={"8","|3","13","|}","|:","|8","|:"
				   ,"18","6","|B","lo","|o","j3"};//,"ß","в","ь"
	string B="";
	///
	string Cleet[]={"<","{","[","(","с","C"};//,"©","¢"
	string C="";
	///
	string Dleet[]={"|)","|}","|]","|>","D","d"};//
	string D="";
	///
	string Eleet[]={"3","е","E"};//,"£","₤","€"
	string E="";
	///
	string Fleet[]={"|=","ph","|#","|\"","F"};//,"ƒ"
	string F="";
	///
	string Gleet[]={"[","-","[+","6","C-","G","g"};//
	string G="";
	///
	string Hleet[]={"#","4","|-|","[-]","{-}","}-{","}{","|=|","[=]","{=}"
				   ,"/-/","|(-)",")-(",":-:","I+I","H","h"};//,"н"
	string H="";
	///
	string Ileet[]={"1","|","!","9","I","i"};//
	string I="";
	///
	string Jleet[]={"J","j","|","/","7",")","]","}"};//
	string J="";
	///
	string Kleet[]={"|<","1<","l<","|{","l{","K","k"};
	string K="";
	///
	string Lleet[]={"|_","|","1","][","L","l"};
	string L="";
	///
	string Mleet[]={"M","m","44","^^","/\\/\\","/X\\","[]V[]",
			        "(V)",".\\","N\\","|\\/|","[]\\/]["
			       ,"][\\\\/\\/][","\\/\\/."};//,"м"
	string M="";
	///
	string Nleet[]={"|\\|","/\\/","/V","][\\\\][","n","N"};//,"И","и","п"
	string N="";
	///
	string Oleet[]={"0","()","[]","{}","<>","oh","о","O"};//,"ө","Θ","Ø"
	string O="";
	///
	string Pleet[]={"|o","|O","|>","|*","|°","|D","/o","[]D","|7","p","P"};//111
	string P="";
	///
	string Qleet[]={"O","9","(,)","0"," kw","q","Q"};//
	string Q="";
	///
	string Rleet[]={"R","r","|2","12",".-","|^","l2"};//,"Я","®"
	string R="";
	///
	string Sleet[]={"S","s","5","$"};//,"§"
	string S="";
	///
	string Tleet[]={"T","t","7","+","7`","'|'"
			       ,"`|`" ,"~|~","-|-","']['"};//,"т"
	string T="";
	///
	string Uleet[]={"|_|","\\_\\","/_/","\\_/","(_)","[_]","{_}"};//
	string U="";
	///
	string Vleet[]={"V","v","\\/"};//
	string V="";
	///
	string Wleet[]={"W","w","\\/\\/","(/\\)","\\^/","|/\\|","\\X/","\\\'","'//"
				   ,"VV","\\_|_/","2u","\\V/","\\\\//\\\\//"};//,"Ш"
	string W="";
	///
	string Xleet[]={"%","*","><","}{",")("};//,"Ж"
	string X="";
	///
	string Yleet[]={"`/","\\|/","y","Y"};//,"Ч","ү","¥"
	string Y="";
	///
	string Zleet[]={"2","Z","z","5","7"," >_","(/)"};//
	string Z="";
	///number
	///
	string leet0[]={"O","D","space","0"};//
	string l0="";
	///
	string leet1[]={"L","I","7","1"};//
	string l1="";
	///
	string leet2[]={"2","Z"};//
	string l2="";
	///
	string leet3[]={"3","e","m","w","nn"};//,"ω","∈","ε"
	string l3="";
	///
	string leet4[]={"4","h","A"};//
	string l4="";
	///
	string leet5[]={"5","S"};//
	string l5="";
	///
	string leet6[]={"6","b","G"};//
	string l6="";
	///
	string leet7[]={"7","T","j","L"};//
	string l7="";
	///
	string leet8[]={"8","B","X"};//
	string l8="";
	///
	string leet9[]={"g","9","J"};//
	string l9="";
	//------------
    srand(time(0));
   	//------------
    A+=Aleet[rand() % 7];
    B+=Bleet[rand() % 13];
    C+=Cleet[rand() % 6];
    D+=Dleet[rand() % 6];
    E+=Eleet[rand() % 3];
    F+=Fleet[rand() % 5];
    G+=Gleet[rand() % 7];
    
    H+=Hleet[rand() % 17];
    I+=Ileet[rand() % 6];
    J+=Jleet[rand() % 8];
    K+=Kleet[rand() % 7];
    L+=Lleet[rand() % 4];
    
    M+=Mleet[rand() % 14];
    
    N+=Nleet[rand() % 6];
    O+=Oleet[rand() % 8];
    P+=Pleet[rand() % 11];
    Q+=Qleet[rand() % 7];
    
    R+=Rleet[rand() % 7];
    S+=Sleet[rand() % 4];
    
    T+=Tleet[rand() % 10];
    U+=Uleet[rand() % 7];
    V+=Vleet[rand() % 3];
    
    W+=Wleet[rand() % 14];
    X+=Xleet[rand() % 5];
    Y+=Yleet[rand() % 4];
    Z+=Zleet[rand() % 7];
    /////////////////////
    /*
     * number
     */
    l0+=leet0[rand() % 4];
    l1+=leet1[rand() % 4];
    l2+=leet2[rand() % 2];
    l3+=leet3[rand() % 5];
    l4+=leet4[rand() % 3];
    l5+=leet5[rand() % 2];
    l6+=leet6[rand() % 3];
    l7+=leet7[rand() % 4];
    l8+=leet8[rand() % 3];
    l9+=leet9[rand() % 3];
    ///
	int siz=leeter.size();
	///
	/*
     * int j ; (j variable , count of  for loop )
     */
	int j;
	///
	for (j=0;j<siz;j++){
		/*
		 * [ ]=[  ] or 2 space
		 */
		if(leeter[j]==' '){
		fin+=" ";
		}
		/*
		 * .=[ .. ] 
		 */
		else if(leeter[j]=='.'){
		fin+=" .. ";
		}
		/*
		 * *=[ ** ] 
		 */
		else if(leeter[j]=='*'){
		fin+=" ** ";
		}
		/*
		 * #=[ ## ] 
		 */
		else if(leeter[j]=='#'){
		fin+=" ## ";
		}
		/*
		 * %=[ %% ] 
		 */
		else if(leeter[j]=='%'){
		fin+=" %% ";
		}
		/*
		 * ^=[ ^^ ] 
		 */
		else if(leeter[j]=='^'){
		fin+=" ^^ ";
		}
		/*
		 * !=[ !! ] 
		 */
		else if(leeter[j]=='!'){
		fin+=" !! ";
		}
		/*
		 * @=[ @@ ] 
		 */
		else if(leeter[j]=='@'){
		fin+=" @@ ";
		}
		/*
		 * &=[ && ] 
		 */
		else if(leeter[j]=='&'){
		fin+=" && ";
		}
		/*
		 * (=[ (( ] 
		 */
		else if(leeter[j]=='('){
		fin+=" (( ";
		}
		/*
		 * )=[ )) ] 
		 */
		else if(leeter[j]==')'){
		fin+=" )) ";
		}
		/*
		 * -=[ -- ] 
		 */
		else if(leeter[j]=='-'){
		fin+=" -- ";
		}
		/*
		 * _=[ __ ] 
		 */
		else if(leeter[j]=='_'){
		fin+=" __ ";
		}
		/*
		 * +=[ ++ ] 
		 */
		else if(leeter[j]=='+'){
		fin+=" ++ ";
		}
		/*
		 * = =[ == ] 
		 */
		else if(leeter[j]=='='){
		fin+=" == ";
		}
		/*
		 * ;=[ ;; ] 
		 */
		else if(leeter[j]==';'){
		fin+=" ;; ";
		}
		/*
		 * :=[ :: ] 
		 */
		else if(leeter[j]==':'){
		fin+=" :: ";
		}
		/*
		 * "=[ "" ] 
		 */
		else if(leeter[j]=='"'){
		fin+=" \"\" ";
		}
		/*
		 * '=[ '' ] 
		 */
		else if(leeter[j]=='\''){
		fin+=" \'\' ";
		}
		/*
		 * \=[ \\ ] 
		 */
		else if(leeter[j]=='\\'){
		fin+=" \\\\ ";
		}
		/*
		 * |=[ || ] 
		 */
		else if(leeter[j]=='|'){
		fin+=" || ";
		}
		/*
		 * ?=[ ?? ] 
		 */
		else if(leeter[j]=='?'){
		fin+=" ?? ";
		}
		/*
		 * /=[ // ] 
		 */
		else if(leeter[j]=='/'){
		fin+=" // ";
		}
		/*
		 * >=[ >> ] 
		 */
		else if(leeter[j]=='>'){
		fin+=" >> ";
		}
		/*
		 * <=[ << ] 
		 */
		else if(leeter[j]=='<'){
		fin+=" << ";
		}
		/*
		 * ,=[ ,, ] 
		 */
		else if(leeter[j]==','){
		fin+=" ,, ";
		}
		/*
		 * {=[ {{ ] 
		 */
		else if(leeter[j]=='{'){
		fin+=" {{ ";
		}
		/*
		 * }=[ }} ] 
		 */
		else if(leeter[j]=='}'){
		fin+=" }} ";
		}
		/*
		 * [=[ [ ] 
		 */
		else if(leeter[j]=='['){
		fin+=" [[ ";
		}
		/*
		 * ]=[ ]] ] 
		 */
		else if(leeter[j]==']'){
		fin+=" ]] ";
		}
		else if(leeter[j]=='a'||leeter[j]=='A'){
		fin+=A;
		}
		
		else if(leeter[j]=='b'||leeter[j]=='B'){
		fin+=B;
		}
		
		else if(leeter[j]=='c'||leeter[j]=='C'){
		fin+=C;
		}
		
		else if(leeter[j]=='d'||leeter[j]=='D'){
		fin+=D;
		}
		
		else if(leeter[j]=='e'||leeter[j]=='E'){
		fin+=E;
		}
		
		else if(leeter[j]=='f'||leeter[j]=='F'){
		fin+=F;
		}
		
		else if(leeter[j]=='g'||leeter[j]=='G'){
		fin+=G;
		}
		
		else if(leeter[j]=='h'||leeter[j]=='H'){
		fin+=H;
		}
		
		else if(leeter[j]=='i'||leeter[j]=='I'){
		fin+=I;
		}
		
		else if(leeter[j]=='j'||leeter[j]=='J'){
		fin+=I;
		}
		
		else if(leeter[j]=='k'||leeter[j]=='K'){
		fin+=K;
		}
		
		else if(leeter[j]=='l'||leeter[j]=='L'){
		fin+=L;
		}
		
		else if(leeter[j]=='m'||leeter[j]=='M'){
		fin+=M;
		}
		
		else if(leeter[j]=='n'||leeter[j]=='N'){
		fin+=N;
		}
		
		else if(leeter[j]=='o'||leeter[j]=='O'){
		fin+=O;
		}
		
		else if(leeter[j]=='p'||leeter[j]=='P'){
		fin+=P;
		}
		
		else if(leeter[j]=='q'||leeter[j]=='Q'){
		fin+=Q;
		}
		
		else if(leeter[j]=='r'||leeter[j]=='R'){
		fin+=R;
		}
		
		else if(leeter[j]=='s'||leeter[j]=='S'){
		fin+=S;
		}
		
		else if(leeter[j]=='t'||leeter[j]=='T'){
		fin+=T;
		}
		
		else if(leeter[j]=='u'||leeter[j]=='U'){
		fin+=U;
		}
		
		else if(leeter[j]=='v'||leeter[j]=='V'){
		fin+=V;
		}
		
		else if(leeter[j]=='w'||leeter[j]=='W'){
		fin+=W;
		}
		
		else if(leeter[j]=='x'||leeter[j]=='X'){
		fin+=X;
		}
		
		else if(leeter[j]=='y'||leeter[j]=='Y'){
		fin+=Y;
		}
		
		else if(leeter[j]=='z'||leeter[j]=='Z'){
		fin+=Z;
		}
		/////////////////////////////////
		/*
		 * 0 =l0
		 */
		else if(leeter[j]=='0'){
		fin+=l0;
		}
		/*
		 * 1 =l1
		 */
		else if(leeter[j]=='1'){
		fin+=l1;
		}
		/*
		 * 2 =l2
		 */
		else if(leeter[j]=='2'){
		fin+=l2;
		}
		/*
		 * 3 =l3
		 */
		else if(leeter[j]=='3'){
		fin+=l3;
		}
		/*
		 * 4 =l4
		 */
		else if(leeter[j]=='4'){
		fin+=l4;
		}
		/*
		 * 5 =l5
		 */
		else if(leeter[j]=='5'){
		fin+=l5;
		}
		/*
		 * 6 =l6
		 */
		else if(leeter[j]=='6'){
		fin+=l6;
		}
		/*
		 * 7 =l7
		 */
		else if(leeter[j]=='7'){
		fin+=l7;
		}
		/*
		 * 8 =l8
		 */
		else if(leeter[j]=='8'){
		fin+=l8;
		}
		/*
		 * 9 =l9
		 */
		else if(leeter[j]=='9'){
		fin+=l9;
		}
		/*
		 * Error char
		 */
		else{
		fin+=" [No such char] ";
		}
	
	}
	return fin;
}
