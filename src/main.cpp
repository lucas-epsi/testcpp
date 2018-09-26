# include <iostream>
# include "lib.h"
# include "lib1.h"

int main() {

calcul first;
calcul multiply;
calcul divide;
ecole secund;

calcul* calculpointeur = new calcul();

cout << calculpointeur -> multiplication(903,986) <<endl; 


cout<< "multiplication 53 x 60 = "<<multiply.multiplication(53,60)<<endl;
cout<< "division 83 / 2 = "<<divide.division(83,2)<<endl;
std::cout<<"addition 63 + 898 = "first.somme(63,898)<<std::endl;
std::cout<< "voici la date du jour:  "<<secund.date()<<std::endl;


parler firstparole;
cout << firstparole.bonjour()<<endl;

return 0;

}
