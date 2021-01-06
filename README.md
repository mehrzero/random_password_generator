# Random password generator (rp9)
Using uppercase and lowercase letters, numbers, symbols(sign),
you can create your own password with any number of characters you want.
# Logo :
        █▀█ █▀█ █▀█ 		█▀█ █▀█ █▀█ 		█▀█ █▀█ █▀█
        █▀▄ █▀▀ ▀▀█ 		█▀▄ █▀▀ ▀▀█ 		█▀▄ █▀▀ ▀▀█
                                		rp9|ok ! 	        rp9|ERROR !
# Help :
	$ rp9 [-h , --help , help]
# Version : 
	$ rp9 [-v , --version , version]
# SYNOPSIS :
	$ rp9 [OPTION]... [LENGTH]
# OPTION :
	-C , custom
	>
	-a , all 
	> Creates a random password using all the characters on the keyboard.
	-u , upper
	> Makes random passwords using uppercase English letters.
	-l , lower
	> Makes random passwords using lowercase English letters.
	-n , number
	> Generates random passwords using numbers.
	-s , sign
	> Generate random passwords using the sign.
	-ul , upperlower
	> Generates random passwords using uppercase and lowercase English letters.
	-uln , upperlowernumber
	> Generate random passwords using uppercase English letters and lowercase letters and numbers.
	-ulns , upperlowernumbersign
	> Generates random passwords using uppercase and lowercase, number, sign English letters.
	leet , 1337, LEET
	> Creates a password of type (LEET)
# LENGTH :
	8, 16, 32
	>
	-len , LENGTH, length
	>
# EXAMPLES :
	$ rp9 all 16
	$ rp9 -C -len
	$ rp9 upper 32
	$ rp9 1377
	...
