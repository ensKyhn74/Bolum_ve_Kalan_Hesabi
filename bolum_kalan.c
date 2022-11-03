#include <stdio.h>
// bölünen ve bölen değerleri klavyeden girilir,bölüm ve kalan hesaplanır

int main() 

{

  int bolunen,bolen,bolum,kalan;
    
  printf("Bolunen: ");
  scanf("%d",&bolunen);

  printf("Bölen: ");
  scanf("%d",&bolen);
 
  bolum = bolunen / bolen;
  kalan = bolunen % bolen;
 
  printf("Bolum = %d\n", bolum);
  printf("Kalan = %d", kalan);
  
  return 0;

}