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


cout<<multiply.multiplication(53,60)<<endl;
cout<<divide.division(83,2)<<endl;
std::cout<<first.somme(63,898)<<std::endl;
std::cout<< "voici la date du jour:  "<<secund.date()<<std::endl;


return 0;

}
