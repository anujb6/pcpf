#include <iostream>

using namespace std;

int main()
{
   int c;
   cout << "1: decimal to binary\n2: decimal to hexadecimal\n choice: " ;
   cin >> c;
   if(c == 1){
       int a[10], n, i;    
        cout<<"Enter the number to convert: ";    
        cin>>n;    
        for(i=0; n>0; i++)    {    
        a[i]=n%2;    
        n= n/2;  
        }    
        cout<<"Binary of the given number= ";    
        for(i=i-1 ;i>=0 ;i--){    
        cout<<a[i];    
        }    
   }
   if(c == 2){
       int num = 0;
       cout<<"Enter the number to convert: ";   
       cin>>num;
       char arr[100];
   int i = 0;
   while(num!=0) {
      int temp = 0;
      temp = num % 16;
      if(temp < 10) {
         arr[i] = temp + 48;
         i++;
      } else {
         arr[i] = temp + 55;
         i++;
      }
      num = num/16;
   }
   cout<<"hexadecimal of the given number = "; 
   for(int j=i-1; j>=0; j--)
   cout << arr[j];
   }
   return 0;
}