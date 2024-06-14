#include<iostream>
#include<conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

main(){
int ar[] = {2, 4, 6, 8 };

ar[0] = 23;

ar[3] = ar[1];

cout << ar[0] << " " << ar[3];
}
