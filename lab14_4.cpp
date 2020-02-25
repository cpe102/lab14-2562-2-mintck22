#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b, int &c, int &d){

	int x[4] ={a,b,c,d};
	int z[] = {0,1,2,3};

	z[0] = rand()%4;
	while (1)
	{
		z[1] = rand()%4;
		if(z[1] != z[0]) break;
	}
	while (1)
	{
		z[2] = rand()%4;
		if((z[2] != z[0]) && (z[2] != z[1])) break;
	}
	z[3] = 6-z[2]-z[1]-z[0];

	a = x[z[0]];
	b = x[z[1]];
	c = x[z[2]];
	d = x[z[3]];
}