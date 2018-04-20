/*Tipo de datos
Gerardo Nuin
20180419
*/
#include <iostream>
#include <cassert>
int main() {
	bool a = true;
	bool b;
	b == not a ;
	assert(b!=a);
	std::cout << b << std::endl;
		
	char e,f;
	e='+';
	f=e; 
	assert(f==e);
	std::cout << f << std::endl;
	
	unsigned g,h;
	g = 10;
	h = 3;
	assert(h!=0);
	std::cout << h%g << std::endl;
	
	int i,j; 
	i = -5;
	j = 150;
	assert(i!=0);
	std::cout << j/i << std::endl;
	
	double k,l;
	k = 1.5;
	l = 25,89;
	assert(k!=0 or l!=0);
	std::cout << k*l << std::endl;

	std::string c,d;
	c="Hola, ";
	d="Mundo \n";
	assert(c+d!="");
	std::cout << c+d;

}
