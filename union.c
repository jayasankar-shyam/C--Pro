/*  JAYASANKAR SHYAM
    S2 AD
    ROLL NO : 40
#include <stdio.h>*/
#define C_SIZE 50

int main()
{

    union address
    {
        char name[C_SIZE];
        char houseName[C_SIZE];
        char cityName[C_SIZE];
        char state[C_SIZE];
        int pincode[C_SIZE];
    };
    union address add1;
    printf("Enter your name : ");
    scanf("%s", &add1.name);
    printf("Enter your house name : ");
    scanf("%s", &add1.houseName);
    printf("Enter your city name : ");
    scanf("%s", &add1.cityName);
    printf("Enter your state name : ");
    scanf("%s", &add1.state);
    printf("Enter your pincode : ");
    scanf("%s", &add1.pincode);
    printf("\nName      : %s\n", add1.name);
    printf("House Name  : %s\n", add1.houseName);
    printf("City Name   : %s\n", add1.cityName);
    printf("State       : %s\n", add1.state);
    printf("Pincode     : %s\n", add1.pincode);
    return 0;

}
/*
#include <stdio.h>
#include <string.h>
#define C_SIZE 100
union Address{
        char name[C_SIZE];
        char hname[C_SIZE];
        char cityname[C_SIZE];
        char state[C_SIZE];
        char pin[C_SIZE];
}record1;

int main()
{
    printf("Enter name:");
    scanf("%s",record1.name);
    printf("Enter house name:");
    scanf("%s",record1.hname);
    printf("Enter city name:");
    scanf("%s",record1.cityname);
    printf("Enter state name:");
    scanf("%s",record1.state);
    printf("Enter pin:");
    scanf("%s",record1.pin);

    printf("Displaying Informations\n");
    printf("Name          : %s \n", record1.name);
    printf("House Name    : %s \n", record1.hname);
    printf("City Name     : %s \n", record1.cityname);
    printf("State name    : %s \n", record1.state);
    printf("Pin           : %s \n", record1.pin);
 }*/
