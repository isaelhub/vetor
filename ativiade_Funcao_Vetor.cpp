#include<stdio.h>
#include<stdlib.h>
  
  void imprimiVet(int vetx[])
  {
     int i=0;
     
     for(i=0; i < 5; i++)
     {
        printf("\n [%d] - ELEMENTOS DO VETOR %d\n",i,vetx[i]);         
     }
  }
  
  void quadradoVet(int vetq[])
  {
     int i=0;
      
     for(i=0; i < 5; i++)
     {
        printf("\n [%d] - QUADRADO DOS ELEMENTOS DO VETOR %d\n",i,vetq[i] * vetq[i]);         
     }    
  }
  
  void primUltimo(int vetp[])
  {
         printf("IMPRESSAO");
         printf ("\nPRIMEIRO ELEMENTO - %d\t   \nULTIMO ELEMENTO  - %d\t\n\n\n",vetp[0], vetp[4]);
  }
 /*    
  void preenche(int vetp[])
  {
      int x;
      
      for (x=0; x<6; x++)
      {
       // [%d] e o x vao mostrar a posição do número digitado
       printf ("\t[%d] Digite um numero: ",x);
       scanf("%d",&vetp[x]);
       printf ("\n");
      }
 }   
 */         
  int main()
  {
    int vetp[5]={4,2,3,5,20};
    
      imprimiVet(vetp);
      quadradoVet(vetp);
      primUltimo(vetp);
      
  system("pause");    
  }
