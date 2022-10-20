#include <stdio.h>
#include <stdlib.h>

int main()
{
printf  ("Was wollen Sie tun\n"
         "1:    Pc Hochfahren\n"
         "2:    Pc Herunterfahren\n"
         "3:    Drucker einschalten\n"
         "4:    Kaffee machen\n"
         "5:    Feierabend machen\n"
         "Geben sie ihre Auswahl ein:"
         );
int zahl;
scanf("%d",&zahl);

if(zahl==1)
    {printf("PC wird Hochgefahren\n");
    return main();}
    
    else if(zahl==2)
        {printf("\n\n\nPC wird Heruntergefahren\n");
        return main();}
        
        else if(zahl==3)
            {printf("\n\n\nDurcker wird eingeschaltet\n");
            return main();}
            
            else if(zahl==4)
                {printf("\n\n\nKaffee wird gemacht\n");
                return main();}
               
               else if(zahl==5)
                {printf("\n\n\nFeierarbend\n");
                return 0;}
                    
                    else{
                        return main();
                        }
}