#include <stdio.h>
#include <stdlib.h>
int main() {
 ////Matematik Menusu/////
 
 printf("**************");
 printf("\n**          **");
 printf("\n*****MENU*****");
 printf("\n**************");
 printf("\n\n");
 printf("1.Toplama Islemi");
 printf("\n2.Fark Islemi");
 printf("\n3.Carpma Islemi");
 printf("\n4.Bolme Islemi");
 printf("\n5.Karekok Islemi");
 printf("\n6.Kup Islemi");
 printf("\n7.10^ Islemi");
 printf("\n8.x^y Islemi");
 printf("\n9.Sin Ýslemi");
 printf("\n10.Cos Islemi");
 printf("\n11.Tan Islemi");
 printf("\n12.Cot Islemi");
 printf("\n13.E^y Islemi");
 printf("\n14.2^y Islemi");
 printf("\n15.x! Islemi");
 printf("\n16.logx Islemi");
 printf("\n\n");
 
 char Islem;
    printf("Isleminizi Secin: ");
 scanf("%d",&Islem);
 
 printf("\n\n");
 
 int i,d,f=1;
 float a,b,c;
 float toplam=0,fark=0,carpim=0,bolum=0,karekok=0,tan=0,cot=0;
    float e=2.7182818284590452;
 
if(Islem<=4)
{
  printf("1.Sayi: ",a);
  scanf("%f",&a);
  printf("2.Sayi: ",b);
  scanf("%f",&b);
}
 switch(Islem)
{
 if(Islem<=4)
 {   
 case 1: 
  toplam=a+b;
     printf("\nToplam: %.3f",toplam);break;
    case 2:
       fark=a-b; 
        printf("\nFark: %.3f",fark);break;
    case 3:
     carpim=a*b;
        printf("\nCarpim: %.3f",carpim);break;
    case 4:
     bolum=a/b;
        printf("\nBolum: %.3f",bolum);break;
    } 
 case 5:
  printf("Sayiyi Yaziniz: ",c);
  scanf("%f",&c);
  karekok=sqrt(c);
        printf("\nKarekok: %.3f",karekok);break;
 case 6:
  printf("Sayiyi Yaziniz: ",c);
  scanf("%f",&c);
  c=c*c*c;
        printf("\nKup Degeri: %.3f",c);break;
 case 7:
  printf("Sayiyi Yaziniz: ",c);
  scanf("%f",&c);
  c=pow(10,c);
        printf("\n10^Y: %.3f",c);break;
 case 8: 
     printf("1.Sayi: ",a);
  scanf("%f",&a);
  printf("2.Sayi: ",b);
  scanf("%f",&b);
  c=pow(a,b);
        printf("\nX^Y Degeri: %.3f",c);break;
 case 9:
    
  printf("Dereceyi Yaziniz: ",c);
  scanf("%f",&c);
  c=sin(c);
        printf("\nSin Degeri: %.3f",c);break;
    
 case 10:
    
  printf("Dereceyi Yaziniz: ",c);
  scanf("%f",&c);
  c=cos(c);
        printf("\nCos Degeri: %.3f",c);break;
    
 case 11:
    
  printf("Dereceyi Yaziniz: ",c);
  scanf("%f",&c);
  tan=sin(c)/cos(c);
        printf("\nTan Degeri: %.3f",tan);break;
    
 case 12:
    
  printf("Dereceyi Yaziniz: ",c);
  scanf("%f",&c);
  cot=cos(c)/sin(c);
        printf("\nCot Degeri: %.3f",cot);break;
    
 case 13:
    
  printf("Sayiyi Yaziniz: ",c);
  scanf("%f",&c);
  c=pow(e,c);
        printf("\nE^y Islemi: %.3f",c);break;
    
 case 14:
     
  printf("Sayiyi Yaziniz: ",c);
  scanf("%f",&c);
  c=pow(2,c);
        printf("\n2^y Islemi: %.3f",c);break;
    
 case 15:
  printf("Sayiyi Giriniz: ",d);
        scanf("%d",&d);
  for(i=1;i<=d;i++)
     {
  f=f*i;
  }
       printf("Faktoriyel:----> %d",f);break;  
case 16:
     printf("Sayiyi Yaziniz: ",c);
  scanf("%f",&c);
  c=log(c)/log(10);
        printf("\log Islemi: %.3f",c);break;
}
 return 0;
}

