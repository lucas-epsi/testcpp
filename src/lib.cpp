# include <iostream>
# include "lib.h"


	int calcul::somme(int nb1, int nb2){
	return nb1+nb2;
}
	int calcul::multiplication(int nb1, int nb2){
	return nb1*nb2;
}
	int calcul::division(int nb1, int nb2){
	if (nb2!=0){
	return nb1/nb2;}
	else return 0;
}

