#include <iostream>
#include <warehouse.h>
#include <truck.h>

Warehouse()
{
	packages = new Package[];
	waitlist = new Package[];
	trucks = new Truck[];
}
~Warehouse()
{

}
// Purpose :....reading params of what?
// # of trucks, x  and y coordinates of warehouse
bool readParams(std::string filename)
{

}
// size, string description, string destination, x coordinate, y coordinate

void readPackages(std::string filename)
{
    ifstream infile;
    infile.open(argv[2]); // filename here?
    if(infile.fail()){
        cerr << "cannot open file" << endl;
        exit(1);
    }
    string name;
    string course;
    getline(infile, name, ':');
    getline(infile, course, '\n');
    while(!infile.eof()){
        packages.add(name);
        courses.add(course, name);
        getline(infile, name, ':');
        getline(infile, course, '\n');
    }
    infile.close();
}


void loadTrucks()
{
	for(int i = 0; i < size of packages; i++){
		trucks[i].addPackage(packages[i]); 
	}
}
void getRoutes() // calculates routes for each truck
{
     /*
     Psuedocode for dijkstra algorithm:
    1. Look at position of warehouse: what is it- --> this is current location of truck
    2. Calculate its distance from it to each possible package destination.
    3. Store these distances in array?
    4. Whichever one has the smallest distance, update current location of truck to that
    package's location.  Knock package off list.
    5. Redo.
    */
    for(int i = 0; i < number of trucks; i++){
        truck[i].printroute()
    }
}

// Sort packages by size in ascending order
void sortPackages()
{	
	quickSort(0, // packages array size; 
}
void quickSort(int begin, int end)
{
	int left = begin;
    int right = end;
    int pivot = data[(left + right) / 2]; // middle
    while (left <= right){
        while(packages[left].getSize() < pivot){
            left++;
        }
        while(packages[right].getSize() > pivot){
            right--;
        }
        if(left <= right){
            swap(left, right);
            left++;
            right--;
        }
    }
    if(begin < right){
        quickSort(begin, right);
    }
    if(left < end){
        quickSort(left, end);
    }
}

void swap(int i, int j)
{
    int temp = packages[i];
    packages[i] = packages[j];
    packages[j] = temp;
}

