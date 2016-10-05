#include <iostream>
#include <truck.h>
#include <cmath>


Truck()
{
	current_size = 0;
	vector = new int[MAX_SIZE];
}
Truck(int posx, int posy)
{
	w_posx = posx;
	w_posy = posy;
}
~Truck()
{

}
bool addPackage(Package p)
{
	if(isFull()){
		return false;
	}
	vector[current_size] = p;
	current_size++;
	return true;
}
int numPackages()
{
	return current_size;
}
bool isFull()
{
	if(current_size == MAX_SIZE){
		return true;
	}
	return false;
}

double distance(int posx1, int posy1, int posx2, int posy2)
{
	double x = pow((posx2 - posx1), 2);
	double y = pow((posy2 - posy1), 2);
	
	return sqrt(x + y);
}
void printRoute()
{
		
}
