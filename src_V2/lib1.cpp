#include "lib1.h"
#include <iomanip>
#include <sstream>
#include <ctime>
#include <time.h>
#include <string>

using namespace std;

string ecole::date(){

time_t now = time(NULL);

string realtime = asctime(localtime(&now));

return realtime;


};
