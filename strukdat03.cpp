/* 
Author	  : Nurul ma'arif 
NPM	      : 140810180040
Deskripsi : exercise-02
Tahun	  : 2019 
*/ 

#include <iostream> 
#include <string.h> 
using namespace std; 

struct Theater { 
int room; 
char seat[3]; 
char movieTitle[30]; 
}; 

int main (){ 
Theater theater; 
theater.room = 7; 
cout<<"seat = ";cin>>theater.seat; 
strcpy(theater.movieTitle, "Adit & Jarwo"); 

cout<<"seat : "<<theater.seat<<endl; 
cout<<"room : "<<theater.room<<endl; 
cout<<"movie : "<<theater.movieTitle<<endl; 
};
