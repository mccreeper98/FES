#include<stdio.h>

int main(){

    int motos, todoterreno, sedan, deportivo, recurso, tipocombustibleM, tipocombustibleT, tipocombustibleS, tipocombustibleD, totaldeveiculos;
    float capacidadM, capacidadS, capacidadD, capacidadT, costoMagna, costoPremium, costoDiesel, tmotos, tterreno, tsedan, tdeportivo, tcombustible, cm, ct, cs, cd, gm, gt, gs, gd, gtotal;
    recurso = 0;
    while(recurso==0){
       printf("¿Cual es la cantidad de motos?\n");
       scanf("%i", &motos);
       printf("/n¿Cual es la cantidad de todoterrenos?\n");
       scanf("%i", &todoterreno);
       printf("\n¿Cual es la cantidad de autos sedan?\n");
       scanf("%i", &sedan);
       printf("\n¿Cual es la cantidad de autos deportivos?\n");
       scanf("%i", &deportivo);
       printf("\n¿Cual es la capacidad del tanque de las motos?\n");
       scanf("%f", &capacidadM);
       printf("\n¿Cual es la capacidad del tanque de los todoterreno?\n");
       scanf("%f", &capacidadT);
       printf("\n¿Cual es la capacidad del tanque de los auto sedan?\n");
       scanf("%f", &capacidadS);
       printf("\n¿Cual es la capacidad del tanque de los autos deportivos?\n");
       scanf("%f",&capacidadD);
       printf("\n¿Que tipo de combustible usan las motos?\n1 = Magna. 2=Premium. 3=Diesel.\n");
       scanf("%i", &tipocombustibleM);
       printf("/n¿Que tipo de combustible usan los todoterreno?\n1 = Magna. 2=Premium. 3=Diesel.\n");
       scanf("%i", &tipocombustibleT);
       printf("\n¿Que tipo de combustible usan los autos sedan?\n1 = Magna. 2=Premium. 3=Diesel.\n");
       scanf("%i", &tipocombustibleS);
       printf("\n¿Que tipo de combustible usan los autos deportivos?\n1 = Magna. 2=Premium. 3=Diesel.\n");
       scanf("%i", &tipocombustibleD);
       printf("\n¿Cual es el costo de la gasolina magna?\n");
       scanf("%f", &costoMagna);
       printf("\n¿Cual es el costo de la gasolina premium?\n");
       scanf("%f", &costoPremium);
       printf("\n¿Cual es el costo del diesel?\n");
       scanf("%f", &costoDiesel);

       tmotos = motos * capacidadM;
       tterreno = todoterreno * capacidadT;
       tsedan = sedan * capacidadS;
       tdeportivo = deportivo * capacidadD;
       tcombustible = tmotos + tterreno + tsedan + tdeportivo;

       switch(tipocombustibleM){
        case 1:
            gm = tmotos * costoMagna;
        break;

        case 2:
            gm = tmotos * costoPremium;
        break;

        case 3:
            gm = tmotos * costoDiesel;
        break;
       }

       switch(tipocombustibleT){
        case 1:
            gt = tterreno * costoMagna;
        break;

        case 2:
            gt = tterreno * costoPremium;
        break;

        case 3:
            gt = tterreno * costoDiesel;
        break;
       }

       switch(tipocombustibleS){
        case 1:
            gs = tsedan * costoMagna;
        break;

        case 2:
            gs = tsedan * costoPremium;
        break;

        case 3:
            gs = tsedan * costoDiesel;
        break;
       }

       switch(tipocombustibleD){
        case 1:
            gd = tdeportivo* costoMagna;
        break;

        case 2:
            gd = tdeportivo * costoPremium;
        break;

        case 3:
            gd = tdeportivo * costoDiesel;
        break;
       }

       gtotal = gm + gt + gs +gd;
       totaldeveiculos = motos + todoterreno + sedan + deportivo;

       printf("\n La cantidad total de veiculos es: %i \nLa cantidad total de combustible que se necesita es: %f \El costo total de combustible es: %f \n considerando:\ %i motos, %i todoterreno, %i autos sedan, %i autos deportivos\n",totaldeveiculos, tcombustible, gtotal, motos, todoterreno, sedan, deportivo);
       printf("\n Desea calcular otra vez ?\n si = 0,  no= 1");
       scanf("%i", recurso);
    }

return 0;
}
