#include <stdio.h>
#include <stdlib.h>

// Programa REF_021_while_com_switch_chars_3

// while com switch

// Programa que conta a frequ�ncia discriminada das vogais e 
// tamb�m dos restantes carateres, mas no seu todo, a partir de
// carateres digitados at� que seja pressionada a tecla ENTER.

#include <stdio.h>
#include <stdlib.h>

#define ENTER '\n'

int main()
{
    char ch;
    int  ka; // contador da vogal a	
    int  ke;
    int  ki;
    int  ko;
    int  ku;
    int  kc; // contador dos restantes carateres
    
    ka = 0;
    ke = 0;
    ki = 0;
    ko = 0;
    ku = 0;
    kc = 0;
    
    printf("\n\nDigite carateres ate ENTER\n\n");
	
    while ( (ch = getchar()) != ENTER)
	{
		switch (ch)
		{
           		case 'a': ka++;
			          break;

		   	case 'e': ke++;
			          break;
	             
		   	case 'i': ki++;
		             	  break;

           		case 'o': ko++;
		             	  break; 
              	             
		   	case 'u': ku++;
			          break;
	             
		   	default:  kc++;
		};	
	}
	
     printf("\n\nFrequencia da Vogal a: %d", ka); 
     printf("\n\nFrequencia da Vogal e: %d", ke); 
     printf("\n\nFrequencia da Vogal i: %d", ki);  
     printf("\n\nFrequencia da Vogal o: %d", ko);
     printf("\n\nFrequencia da Vogal u: %d", ku);
     
     printf("\n\nFrequencia dos carateres nao Vogais: %d", kc);
     
     printf("\n\n");
	 system("pause");
	
	return 0;
} //fecha main



