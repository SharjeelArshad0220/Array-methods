#include<iostream>
using namespace std;
void rev(int list[],int n)
{	int temp=0;
	int i=(n-1);
	for (int j=0;j<=(n/2);j++)
	{
		temp=list[i];
		list[i]=list[j];
		list[j]=temp;
		i--;
	}
	for(int f=0;f<n;f++)
	{
		cout<<list[f]<<",";
	}
	cout<<"list is reversed!"<<endl;
}
int second_largest_element(int list[],int n)
{
	int largest,second_largest=0;
	for(int i =0;i<n;i++)
	{
		if(list[i]>largest)
		{
			largest=list[i];
		}
	if(list[i]>second_largest && list[i]!=largest)
	{
	second_largest=list[i];	
	}
	}
return second_largest;
}
string sort_check(int list[],int n)
{
	for (int i =0; i<n ; i++)
		if(list[i]>list[i+1])
		{
			return "The list is not sorted";
		}
	else
	{
	return "The list is sorted";
}
}
int Max_value(int numbers[],int n)
{
	int max_value=numbers[0];
for (int i=1;i<n;i++)
{
	if(max_value<numbers[i])
	{
		max_value=numbers[i];
	}
}
return max_value;
}
int sum(int list[],int n)
{
	int total=0;
	for(int i=0;i<n;i++)
	{
		total+=list[i];
	}
	return total;
}
int main()
{
	int ch,x=0;
do 
{
	cout<<"enter the size of array:"<<endl;
	cin>>x;
}
while(x<0);
int arr[x];
for (int j=0;j<x;j++)
{
	cout<<"Enter the element of index "<<j<<endl;
	cin>>arr[j];
}
while (true)
{
	cout<<"\n*****SELECT THE METHOD*****\n1.find Maximum value of the list\n2.find Sum of the whole list\n3.Reverse the order of list\n4.find the second largest element of list\n5.Check the list is sorted or not\n0.Exit"<<endl;
	cin>>ch;
	if (ch==1)
	{
		cout<<"The max. value of this list is="<<Max_value(arr,x)<<endl;
	}
	else if(ch==2)
	{
		cout<<"The sum of numbers provided is="<<sum(arr,x);
	}
	else if(ch==3)
	{
		cout<<"The reverse of list is=";
		rev(arr,x);
	}
	else if(ch==4)
	{
		cout<<"The Sec. largest number in list is="<<second_largest_element(arr,x)<<endl;
	}
	else if(ch==5)
	{
		cout<<sort_check(arr,x)<<endl;
	}
	else if(ch==0)
	{
		break;
	}
}
	return 0;
}