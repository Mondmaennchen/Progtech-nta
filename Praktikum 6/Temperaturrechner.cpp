#include <stdio.h>
#include <stdlib.h>

int main() 
{
                                                                                                                   //Willkommen und Einführung zur Auswahlenstehende Einheiten
printf("Hallo Willkommen bei dem Temperaturumrechner\n");
    char temp;
    printf("Temperatureinheit Auswahl!\n");
    printf("Zur Auswahl steht\n\n");
    printf("          C für Grad Celsius\n");
    printf("          F für Grad Fahrenheit\n");
    printf("          K für Grad Kelvin\n\n");
    printf("Wählen sie nun Ihre Temperatureinheit aus:");
    scanf("%s",&temp);
                                                                                       
            if(temp=='c'){                                                                                      //Celsius
                printf("\nSie haben Celsius gewählt\n");
                    printf("Geben sie nun Ihre Temperatur höhe oder tiefe ein: ");
                    float c;
                    scanf("%f",&c);
                    float f=c*1.8+32;
                    float k=c+273.15;
                    printf("\n%0.2f Celsius sind in Fahrenheit %0.2f und in Kelvin %0.2f" ,c,f,k);
                    printf("\n\nDanke für die Nutzung dieses Rechners.....");
                    system("PAUSE");} // geht irgendwie nicht dafür bei anderen scanf
                
                else if(temp=='f'){                                                                             //Fahrenheit
                
                printf("\nSie haben Fahrenheit gewählt\n");
                printf("Geben sie nun Ihre Temperatur höhe oder tiefe ein: ");
                    float f;
                    scanf("%f",&f);
                    float c=(f-32)*5/9;
                    float k=(f-32)*5/9+273.15;
                    printf("\n%0.2f Fahrenheit sind in Celsius %0.2f und in Kelvin %0.2f" ,f,c,k);
                    printf("\n\nDanke für die Nutzung dieses Rechners.....");
                    scanf("%d",&f);}
                  
                  else if(temp=='k'){                                                                           //Kelvin
                  
                    printf("\nSie haben Kelvin gewählt\n");
                    printf("Geben sie nun Ihre Temperatur höhe oder tiefe ein: ");
                    float k;
                        scanf("%f",&k);
                   
                    float c=k-273.15;
                    float f=(k-273.15)*9/5+32;
                    printf("\n%0.2f Kelvin sind in Fahrenheit %0.2f und in Celsius %0.2f" ,k,f,c);
                    printf("\n\nDanke für die Nutzung dieses Rechners.....");
                    scanf("%d",&f);}
                        
                        else{                                                                                   //Error 
                        
                                printf("\n\n\n\n\n\n\n\n\n!!Fehler bei der eingabe versuchen sie es erneut!!\n\n");
                                return main();}
    
}