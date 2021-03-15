#include <stdlib.h>


// by baihaq r

int main()
{
    int p,z ,n=100;
    int *pa=&p,*za=&z;
    update(n, &p,&z);// variabel setalah masuk fungsi update.
 printf( " kuadrat dari 100 adalah=%d   akar  dari 100 adalah=%d", p,z);
return 0;}

void update(  int n,int *pa, int *za){
*pa = n*n;
*za= sqrt(n);

}
