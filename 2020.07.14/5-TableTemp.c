#include <stdio.h>
long int main(){
//drawing table titles
 printf("------------------------------------\n");
 printf("|DegreesCentigrade|"); 
 printf("|Fahrenheit       |\n");
 printf("|----------------------------------|\n");
 float f;
 int deg;
 for(deg=0;deg<=500;deg+=20){
 //deg=(5/9)(f-32);
// int i= 5/9;
 float i=0.555;
 f=(deg/i)+32;
 printf("|     %d	    |",deg);
 printf("|     %f	    |\n",f);     
 }
 printf("|----------------------------------|");
}