// Write a function to calculate force of attraction on a body of mass 'm' exerted by earth. Consider g = 9.8m/s²

float attractionforce(float);


    float attractionforce(float m){

          return m * 9.8;

    }




#include<stdio.h>

int main(){
    float m;


    printf("Enter mass of the body in KG\n");  // KG = Kilograms
    scanf("%f", &m);

    printf("Force of attraction on a body of mass %.2f KG exerted by earth is %.2f", m, attractionforce(m));
    



    return 0;
}