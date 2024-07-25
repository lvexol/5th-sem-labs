/*#include <iostream>

#include <cstring>

using namespace std;

int main() {

char str[10];

strcpy(str, "This is a very long string that exceeds the array size");

cout << str << endl;*/
#include <iostream>

#include <cstring>

using namespace std;

int main() {

char str[50];

strncpy(str, "This is a bounded string now", sizeof(str) - 1);

str[sizeof(str) - 1] = '\0';

cout << str << endl;

return 0;

}