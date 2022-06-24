#include <stdio.h>

struct monhoc
{
    int sotinchi;
    char tenmonhoc[25];

};

int main()

{

struct monhoc c[] = {{3, "Lap trinh co ban"},

{4, "Dai so tuyen tinh"},

{4, "Vat ly 1"},

{2, "Tieng Anh 1"}};

int i;

int sum, min, vitri;

min = c[0].sotinchi;

vitri =0;

sum =0;
 


 
for (i=0; i<4; i++)

{

sum+=c[i].sotinchi;

if (min>c[i].sotinchi)

{

min = c[i].sotinchi;

vitri = i;

}

}

printf("Tong so TC= %d\n", sum);

printf("%s co it TC nhat (%d)\n", c[vitri].tenmonhoc, c[vitri].sotinchi);

return 0;

}
