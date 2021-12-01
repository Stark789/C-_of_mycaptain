#include <iostream>
using namespace std;

int main()
{
	int x;
   int data[x];
   cout<<"Enter the number of elements:"<<endl;
   cin>>x;
   cout << "Enter elements: "<<endl;

   for(int i = 0; i < x; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < x; ++i)
      cout << endl << *(data + i);


}
