#include <iostream>
using namespace std;
int arr[5];
int  n=5;
int top=-1;
void push(int a)
{
	if (top>=n-1)
{
	cout<<"stack is full "<<endl;
}
else {
	top++;
	arr[top]=a;
	
}
}
void pop(){

if(top<=-1)
{
	cout<<"stack is empty"<<endl;
}
else {
	cout<<"pop element is "<<arr[top]<<endl;
	top--;
}
}
void display ()
{
	if (top>=0)
	{
		for (int i=0;i<=top;i++)
		{
			cout<<arr[i]<<"  ";
			
		}
		cout<<endl;
	}
	else {
	
	cout<<"stack is empty ";
}
}
int main(){
	int x;
	int y;
	cout<<"1 for push "<<endl;
	cout<<"2 for pop"<<endl;
	cout<<"3 for display"<<endl;
	cout<<"4 for exit"<<endl;
	do{
		cout<<"enter your choice "<<endl;
		cin>>x;
		switch(x)
		{
			case 1:{
			
			
				cout<<"enter your element";
				cin>>y;
				push (y);
				break;
			}
				case 2:{
					
				
					pop();
					break;
				}
					case 3:{
						
					
						 void dis();
						break;
					}
						case 4:{
							
						
						
							cout<<"exit";
							
							break;
							
						}
						default :{
							cout<<"invalid";
							
						}
		}
	}
	while(x!=4);
	}
	
	
