#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>


int max1(int im, int jm, int a[im][jm])
{
  int max, i, j ;
max=a[1][0];

printf("%d", im);
// �������� ��� �����

for (i=0; i<im; i++)

{

    // ���������� �� ��� �������� ��� ����� ������ i

    for(j=0; j<jm; j++)

    {
         // ��������� ����� ������� ������ � ����������
         if (i>j)
            {

        if (a[i][j]>max)

                 {
          max=a[i][j];
                 }
            }
    }
}
// ���� ������������� ��������

printf ("\n Max element of matrica under main diagonal: %d", max);




printf ("matrica a: \n");
for (i=0; i<im; i++)

{

     // �������� ��� ��������

    for(j=0; j<jm; j++)

    {

         printf("%d ", a[i][j]);

    }

// ������� �� �������� ������

printf("\n");

}
}



main()

{

int i,j; // ��������� �����
int im, jm, str, sto, g, k;
unsigned int v;

do
 {


printf("Change variant of rozmir matrica :\n");
printf("If you write 1, you will change na, nb ta mb\n ");
printf("If you write 2, program will initialization rozmir witout you \n ");
scanf("%d", &g);
 }
 while (g!=1 &&g!=2);

if (g==1)

  {

printf("cout number of strok matrica A:");
scanf("%d", &im);

printf("cout number of strok matrica B:");
scanf("%d", &str);

printf("cout number of stovbciv matrica B:");
scanf("%d", &sto);

  }

 if (g==2) {im = 3; str=3; sto=2;}

jm=im;

int a[im][jm];
int b[str][sto];
int A[im][jm];
int d[im];
int c[i][j];

int max, min; // ����� ��� ���������� ����. �������� �������


// �������� ������� b
// ���������� �� ������
for (i=0; i<str; i++)
{
    // ���������� �� ������� ��� ����� ������ i
    for(j=0; j<sto; j++)
    {

    // �������� ������� �������� ������� � ���������

    printf("vvedite element of matrica b [%d][%d]: ", i, j);

    scanf("%d", &b[i][j]);

    printf("\n");

    }

// ������� �� �������� ������

}

// �������� ������� a
// ���������� �� ������
for (i=0; i<im; i++)
{
    // ���������� �� ������� ��� ����� ������ i
    for(j=0; j<jm; j++)
    {

    // �������� ������� �������� ������� � ���������

    printf("vvedite element of matrica a [%d][%d]: ", i, j);

    scanf("%d", &a[i][j]);

    printf("\n");

    }

// ������� �� �������� ������
}


// ���� ������ �� �������

printf ("matrica b: \n");

// �������� ��� �����

for (i=0; i<str; i++)

{

     // �������� ��� ��������

    for(j=0; j<sto; j++)

    {

         printf("%d ", b[i][j]);

    }

// ������� �� �������� ������

printf("\n");

}

printf ("matrica a: \n");
for (i=0; i<im; i++)

{

     // �������� ��� ��������

    for(j=0; j<jm; j++)

    {

         printf("%d ", a[i][j]);

    }

// ������� �� �������� ������

printf("\n");

}

do
{

// ���� � ����
 printf("\nchange number of target:\n");
 printf("1-max/min under/upper main diagonal\n");
 printf("2-transponirovanie of matrica b\n");
 printf("3-mnojenia of matrica a na b\n");
 printf("4-Sortirovka za zrostaniem elements of matrica a\n");
 printf("5-sum riadkiv of matrica a and stovbciv of matrica b \n");
 printf("6-exzit\n");
 scanf("%d", &v);


switch (v)
    {

    case 1:
// ����� ���������


max1(im, jm, a[im][jm]);
//������������ ������� ���� ������� �������

max=a[0][1];

for (i=0; i<im; i++)
{
    // ���������� �� ��� �������� ��� ����� ������ i

    for(j=0; j<jm; j++)

    {
         // ��������� ����� ������� ������ � ����������
         if (i<j)
            {

        if (a[i][j]>max)

                 {
          max=a[i][j];
                 }
            }
    }
}




printf ("\n Max element of matrica upper main diagonal: %d", max);

min=a[0][1];

for (i=0; i<im; i++)
{

    // ���������� �� ��� �������� ��� ����� ������ i

    for(j=0; j<jm; j++)

    {
         // ��������� ����� ������� ������ � �������
         if (i<j)
        {

        if (a[i][j]<min)

         {
    min=a[i][j];
         }
        }
    }
}

printf ("\n Min element of matrica upper main diagonal: %d", min);

min=a[1][0];

for (i=0; i<im; i++)

{

    // ���������� �� ��� �������� ��� ����� ������ i

    for(j=0; j<jm; j++)
    {
         // ��������� ����� ������� ������ � �������
         if (i>j)
     {
        if (a[i][j]<min)

        {
        min=a[i][j];
        }
     }
    }
}
printf ("\n Min element of matrica under main diagonal: %d", min);

break;




case 2:


printf("Transportirovanie of matrica\n");


for (i = 0; i < sto; i++){
        for (j = 0; j < str; j++)
            A[i][j] = b[j][i];
    }

for (i=0; i<str; i++)

{

     // �������� ��� ��������

    for(j=0; j<sto; j++)

    {

         printf("%d ", A[i][j]);

    }

// ������� �� �������� ������

printf("\n");

}

break;

case 3:

for (i=0; i<im; i++)

{

     // �������� ��� ��������

    for(j=0; j<sto; j++)

    {

       c[i][j]=0;

    }
}
 printf("Matrica mnojenia\n");
    // ��������� ������

  for ( i = 0; i < im; i++)
  {
  c[i][j] = 0;
    for (j = 0; j < sto; j++)
    {
      c[i][j] = 0;
      for (int k = 0; k < im; k++)
      {
       c[i][j] +=  a[i][k] * b[k][j];
      }
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
  // ����� ������� ������������

break;

case 4:

min=a[0][0];
for (i=0; i<im; i++)

{
    // ���������� �� ��� �������� ��� ����� ������ i
    for(j=0; j<jm; j++)
    {
         // ��������� ����� ������� ������ � �������
        if (a[i][j]<min)
        {
        min=a[i][j];
        }
    }
}


printf("%d\n", min);

    printf("Sortirovka masiva a:\n");

   for (i=0; i<im; i++)

{

    // ���������� �� ��� �������� ��� ����� ������ i


    for(j=0; j<jm; j++)
    {
         // ��������� ����� ������� ������ � �������
         if (a[i][j]>min)
     {
         k=a[i][j];
        a[i][j]=min;
        min=k;
     }
    }
}


printf ("matrica a za zrostaniem: \n");
for (i=0; i<im; i++)
{
     // �������� ��� ��������

    for(j=0; j<jm; j++)
    {
         printf("%d ", a[i][j]);
    }

// ������� �� �������� ������
printf("\n");
}


case 5:


for (i=0; i<im; i++)

{
k=0;
     // �������� ��� ��������
for (j=0; j<jm; j++)
{
           k=a[i][j]+k;
}

     printf("%d ", k);

// ������� �� �������� ������
}
printf("\n");

for (j=0; j<sto; j++)

{
k=0;
     // �������� ��� ��������
for (i=0; i<str; i++)
{
           k=b[i][j]+k;
}

     printf("%d ", k);

// ������� �� �������� ������
}

}


}

while (v!=6);
getch();
}
