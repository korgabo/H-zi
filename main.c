/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()
{
    
    /*
         int szam;
   int osszeg = 0;
   while (szam!=0){
       printf("Egész szám(vége 0):");
       scanf("%d",&szam);
       osszeg+=szam;
   }
   printf("A megadott számok összege:%d",osszeg);
    */
    
    /*
    
   int szam;
   int pozitiv = 0;
   while (szam!=0){
    printf("Egész szám(vége 0):");
       scanf("%d",&szam);
       if(szam > 0){
           ++pozitiv;
       }
   }
   printf("Pozitiv számok: %d", pozitiv);
   */
   
   /*
    int szam;
   int pozitiv = 0;
   int negativ = 0;
   while (szam!=0){
    printf("Egész szám(vége 0):");
       scanf("%d",&szam);
       if(szam > 0){
           ++pozitiv;
       }
       else if(szam < 0){
       ++negativ;
       }
   }
   printf("Pozitiv számok: %d \n", pozitiv);
   printf("Negatív számok: %d \n", negativ);
   */
   /*
   int n1;
   int n2;
   printf("Adjon meg az első pozitív egész számot:\n");
   scanf("%d",&n1);
   while(n1 <= 0){
       scanf("%d",&n1);
   }
      printf("Adjon meg a második pozitív egész számot:\n");
   scanf("%d",&n2);
   while(n2 <= 0){
       scanf("%d",&n2);
   }
   if(n1 > n2){
       printf("\nn1 > n2");
   }
   else if(n1 < n2){
       printf("\nn1 < n2");
   }
   else{
       printf("\bn1=n2");
   }
   */
   /*
   int n1;
   int szam = 1;
   printf("Adjon meg egy pozitív egész számot:");
   scanf("%d",&n1);
   while(szam < n1){
       if(szam % 4 == 0){
           printf("\n%d",szam);
       }
       ++szam;
   }
   */
   /*
     int n;
   int szam = 1;
   printf("Adjon meg egy pozitív egész számot:");
   scanf("%d",&n);
   while(szam < n){
       ++szam;
   }
   while(szam >= 1){
       if(szam%2 ==1){
           printf("\n%d",szam);
       }
       --szam;
   }
*/
    return 0;
}
