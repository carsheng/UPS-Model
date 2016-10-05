#include <iostream>
#include <package.h>

// Package Class Implementation

//Constructor
Package::Package()
{

}

// Constructor
Package:: Package(std::string desc, double size, std::string dest,
		  double lat, double lng)
{
	double latTemp = lat;
	double lngTemp = lng;
	description = desc;
	size = size;
	destination = dest;
	lat = latTemp;
	lng = lngTemp;
}

//Destructor
Package::~Package()
{

}

//something about a bool operator???


// description
std::string getDescription()
{
	return description;
}
//size of package
double Package::getSize()
{
	return size;
}

//get latitude of destination
double Package::getLat()
{
	return lat;
}

//get longitude of destination
double Package::getLng()
{
	return lng;
}

std::string getDestination()
{
	return destination
}
