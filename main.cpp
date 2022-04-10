#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int ile;
    int doile;
    cout << "Ile liczb: ";
    cin >> ile;
    cout << "Do ile: ";
    cin >> doile;
    cout << "------------------------------------------\n";
    int a[10000]={14,19,4,19,15,4,7,6,12,201};
    int mini;
    int maxi;
    int x;
    srand(time(NULL));
    for (int i = 0; i < ile; i++)
    {
      a[i] = rand() % doile+1;
      cout << a[i] << " ";
    }
    cout << endl;
    mini = a[0];
    maxi = a[0];
    for (int i = 0; i < ile; i++)
    {
      if (mini > a[i])
      {
        mini = a[i];
      }
        if (maxi < a[i])
      {
        maxi = a[i];
      }
    }
    cout << "mini: " << mini << endl;
    cout << "maxi: " << maxi << endl;
    x = (maxi-mini)+1;
    cout << "Ilosc kubeczkow: " << x << endl;
    cout << "------------------------------------------\n";
    int kub[x];
    for(int i=0; i<x; i++)
    {
      kub[i] = 0;
      cout << kub[i] << " ";
    }
    cout << endl;
    for(int i=0; i<ile; i++)
    {
      kub[a[i]-mini] = kub[a[i]-mini] + 1;
    }
    for(int i=0; i<x; i++)
    {
      cout << kub[i] << " ";
    }
    cout << endl;
    cout << "------------------------------------------\n";
    for(int k=0; k<x; k++)
    {
      for(int i=0; i<kub[k]; i++)
      {
        cout << k+mini << " ";
      }
    }
    cout << endl;
}
