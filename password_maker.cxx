//int unit
//string mood
//////////////////////
string custom_password_maker(int unit,string mood){

	string pass="";
    int size = mood.size() - 1;

    srand(time(0));
    for(int a = 0; a < unit; a++) {
       pass+=mood[rand() % size];
    }
	
	return pass;
}
////////////////////////////////
