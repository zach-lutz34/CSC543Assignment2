#include<iostream>

using namespace std;

int main () {
   int a[10][10] = { {0, 0, 3, 0, 4} , {0, 0, 5, 7, 0} , 
        {0, 0, 0, 0, 0}, {0, 2, 6, 0, 0} };
   int x, y, count = 0;
   int row = 4, col = 5;
   for (x = 0; x < row; ++x) {
      for (y = 0; y < col; ++y) {
         if (a[x][y] == 0)
            count++;
      }
   }
   cout<<"The matrix is:"<<endl;
   for (x = 0; x < row; ++x) {
      for (y = 0; y < col; ++y) {
         cout<<a[x][y]<<" ";
      }
      cout<<endl;
   }
   cout<<"The number of zeros in the matrix are "<< count <<endl;
   if (count > ((row * col)/ 2))
      cout<<"Yes, this is a sparse matrix"<<endl;
   else
      cout<<"No, this is not a sparse matrix"<<endl;
   return 0;
}
