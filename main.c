/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 20 de agosto de 2018, 11:06 PM
 */

#include <stdio.h>
#include <math.h>

#define arecto 90

/*
 * 
 */
int main() {
    float hipotenusa,cateto1,cateto2,angulodado,angulox,aux;
    printf("vamos a calcular la hipotenusa de tu triangulo rectangulo\ndigita aqui los 2 catetos");
    scanf("%f%f",&cateto1,&cateto2);
    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
    printf("\nla hipotenusa de tu triangulo es igual a %.3f",hipotenusa);
    printf("\nmuy bien, ahora dame un angulo que no sea el recto y yo te dire el que hace falta");
    scanf("%f",&angulodado);
    aux = 180-arecto;
    angulox = aux-angulodado;
    printf("\nel angulo misterioso es de: %f",angulox);
    
    
    
    
    
    
    
    

    return 0;
}

