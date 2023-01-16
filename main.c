#include <stdio.h>
#include <stdlib.h>
//dizideki her elemani ve kac kez tekrar ettigini yazdiran kod
int main()
{
    int N;
    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&N);
    int dizi[N];
    for(int i=0; i<N; i++)
    {
        printf("Dizinin %d. indisini giriniz:",i);
        scanf("%d",&dizi[i]);
    }
    for(int i=0; i<N; i++)
    {
        printf("Dizinin %d. elemani:%d\n",i+1,dizi[i]);
    }
    int sayac=0;
    for(int i=0; i < N; i++)
    {
        sayac=0;
        for(int j=0; j < N ; j++)
        {
            if(dizi[i]==dizi[j])
            {
                sayac++;
            }
        }
       printf("%d sayisindan %d adet \n",dizi[i],sayac);
    }
    return 0;
}
