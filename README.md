Job
*****

Introduction
============
Actually, the program is not working... 
I don't understand how to implement database communication on https://rdb.altlinux.org/api/ 


Building Job
==============

Methods:
-------
GetBinaryPackages;
This method have to implement a connection with the https://rdb.altlinux.org/api/, receive information about packages and add it in the vector "binaryPackages"(But method doesn`t work). Result is vector with binary packages of this brach.
 
GetPackagesDifference;
This method compares two vectors of packets, if it finds a match, it doesn`t add to a new vector difference. Result is vector with binary packages for given branch whout identical packages from another branch.


Main:
-----
Send the name of the branch to the method GetBinaryPackages twice. Build json by passing a vector difference from the method GetPackagesDifference.
