#include <iostream>

using namespace std;

 main() {
	int A[10] = {8,42,1,435,121,84,21,47,12,8874};
   int min0 = A[0];
   int min1 = A[0];
   for(int i=0; i<10; i++)
   {
        if (A[i] < min0)
         min0 = A[i];
         if (A[i] < min1 && A[i] > min0)
         min1 = A[i];
   }

   
    cout << min0 << " " << min1 << endl;
}
