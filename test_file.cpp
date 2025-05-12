#include <iostream>
#include <vector>
using namespace std;
int main(){
  string s;
  cout<<"enter the string"<<endl;
  cin>>s;
  int sum=0;
  for(auto x:s){
    sum+=x-'0';
  }
  cout<<sum<<endl;
  return 0;
}
// This code takes a string input from the user, converts each character to its integer value by subtracting '0', and sums them up. Finally, it prints the sum.
// The code is correct and should work as expected. It uses a for loop to iterate through each character in the string, converts it to an integer, and adds it to the sum. The final result is printed to the console.