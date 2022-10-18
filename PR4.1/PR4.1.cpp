// Lab_04_1.cpp 
// < Висоцький Володимир > 
// Лабораторна робота № 4.1 
// Цикли
// Варіант 1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double S ;
   int k, N, i;
   cout << "N= "; cin >> N;
   cout << "k= "; cin >> k;

   i = k;
   S = 0;
   while (i <= N) {
      S += 1.*(i*i)/(k*k + N*N);
      i++;
   }
   cout << "   while = " << S << endl;

   i = k;
   S = 0;
   do {
      S += 1. * (i * i) / (k * k + N * N);
      i++;

   } while (i <= N);
   cout << "do while = " << S << endl;

   S = 0;
   for (i = k; i <= N; i++) {

      S += 1. * (i * i) / (k * k + N * N);

   }
   cout << " for i++ = " << S << endl;

   S = 0;
   for (i = N; i >= k; i--) {

      S += 1. * (i * i) / (k * k + N * N);

   }
   cout << " for i-- = " << S << endl;
   return 0;
}