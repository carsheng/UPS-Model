/*
 * package.h -- header file for the package class
 * Created by: Adam Plumer (modified by Caroline Sheng)
 * Date created: Mar 13, 2016
 */

#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package
{
public:
        Package();
        Package(std::string desc, double size, std::string dest, double lat, 
                double lng);
        ~Package();
        std::string getDescription();
        double getSize();
        double getLat();
        double getLng();
        std::string getDestination();
        
private:
        std::string description;
        double size;
        std::string destination;
        double lat;
        double lng;
};

#endif
