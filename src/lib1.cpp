#include "lib.h"
#include <ctime>

char ecole::date(){

time_t temps;
struct tm datetime;
char format[32];

time(&temps);
datetime = *localtime(&temps);

strfrtime(format, 32,"%Y%m%d %H%M", &datetime);

return << format <<endl;

}
