#include<iostream>
using namespace std;
string arr1[30],arr2[30],arr3[30],arr4[30],arr5[30],arr6[30],arr7[30],arr8[30];
int total=0;
void enter()
{
	int choice;
	cout<<"How many person's covid vaccination details do you want to enter :";
	cin>>choice;
	if(total==0)
	{
	for(int i=0;i<choice;i++)
	 {
	 	cout<<"\nEnter data of person: "<<i+1<<endl<<endl;
	 	cout<<"Enter name: ";
	 	cin>>arr1[i];
	 	cout<<" Enter age: ";
	 	cin>>arr2[i];
		cout<<" Enter Aadhar Card Number: ";
	 	cin>>arr3[i];
	 	cout<<" Enter Name of Covid Vaccine: ";
	 	cin>>arr4[i];
	 	cout<<" Enter number of doses given: ";
	 	cin>>arr5[i];
	 	cout<<" Enter State: ";
	 	cin>>arr6[i];
	 	cout<<" Enter District: ";
	 	cin>>arr7[i];
	 	cout<<" Enter contact number: ";
	 	cin>>arr8[i];
	 }
	}
	else
	{
	for(int i=total;i<total+choice;i++)
	 {
	 	cout<<"\nEnter data of person: "<<i+1<<endl;
	 	cout<<"Enter name: ";
	 	cin>>arr1[i];
	 	cout<<" Enter age: ";
	 	cin>>arr2[i];
		cout<<" Enter Aadhar Card Number: ";
	 	cin>>arr3[i];
	 	cout<<" Enter Name of Vaccine: ";
	 	cin>>arr4[i];
	 	cout<<" Enter number of doses given: ";
	 	cin>>arr5[i];
	 	cout<<" Enter State: ";
	 	cin>>arr6[i];
	 	cout<<" Enter District: ";
	 	cin>>arr7[i];
	 	cout<<" Enter contact number: ";
	 	cin>>arr8[i];
	 }
	}
	total=total+choice;
}
void show()
{
 if(total==0)
 {
 	cout<<"No data is entered yet"<<endl;
 }
 else
 {
 	for(int i=0;i<total;i++)
   {
   	cout<<"\nData of person: "<<i+1<<endl;
	 	cout<<"Name: "<<arr1[i]<<endl;
	 	cout<<"Age: "<<arr2[i]<<endl;
	 	cout<<"Aadhar Number: "<<arr3[i]<<endl;
	 	cout<<"Name of Vaccine: "<<arr4[i]<<endl;
	 	cout<<"Number of doses: "<<arr5[i]<<endl;
	 	cout<<"State: "<<arr6[i]<<endl;
	 	cout<<"District: "<<arr7[i]<<endl;
	 	cout<<"Contact Number: "<<arr8[i]<<endl;
   }
 }
}
void search()
{
	if(total==0)
 {
 	cout<<"No data is entered yet"<<endl;
 }
 else
 {
 	string aadharno;
 	cout<<"Enter Aadhar Number of Person to be searched:";
 	cin>>aadharno;
 	for(int i=0;i<total;i++)
   {
   	if(aadharno==arr3[i])
	   {
	   	cout<<"\nData of person: "<<i+1<<endl;
	 	cout<<"Name: "<<arr1[i]<<endl;
	 	cout<<"Age: "<<arr2[i]<<endl;
	 	cout<<"Aadhar Number: "<<arr3[i]<<endl;
	 	cout<<"Name of Vaccine: "<<arr4[i]<<endl;
	 	cout<<"Number of doses: "<<arr5[i]<<endl;
	 	cout<<"State: "<<arr6[i]<<endl;
	 	cout<<"District: "<<arr7[i]<<endl;
	 	cout<<"Contact Number: "<<arr8[i]<<endl;
	   }
   }
 }
}
 
void update()
{
	if(total==0)
 {
 	cout<<"No data is entered yet"<<endl;
 }
 else
 {
	string aadharno;
 	cout<<"Enter Aadhar Number of Person to be updated:";
 	cin>>aadharno;
 	for(int i=0;i<total;i++)
   {
   	if(aadharno==arr3[i])
	   {
	   	cout<<"Previous Data"<<endl<<endl;
	   	cout<<"\nData of person: "<<i+1<<endl;
	 	cout<<"Name: "<<arr1[i]<<endl;
	 	cout<<"Age: "<<arr2[i]<<endl;
	 	cout<<"Aadhar Number: "<<arr3[i]<<endl;
	 	cout<<"Name of Vaccine: "<<arr4[i]<<endl;
	 	cout<<"Number of doses: "<<arr5[i]<<endl;
	 	cout<<"State: "<<arr6[i]<<endl;
	 	cout<<"District: "<<arr7[i]<<endl;
	 	cout<<"Contact Number: "<<arr8[i]<<endl;
	 	cout<<"\Enter new data"<<endl;
	 	cout<<"Enter name: ";
	 	cin>>arr1[i];
	 	cout<<" Enter age: ";
	 	cin>>arr2[i];
		cout<<" Enter Aadhar Card Number: ";
	 	cin>>arr3[i];
	 	cout<<" Enter Name of Vaccine: ";
	 	cin>>arr4[i];
	 	cout<<" Enter number of doses given: ";
	 	cin>>arr5[i];
	 	cout<<" Enter State: ";
	 	cin>>arr6[i];
	 	cout<<" Enter District: ";
	 	cin>>arr7[i];
	 	cout<<" Enter contact number: ";
	 	cin>>arr8[i];
	   }
   }
 }
}
void deleterecord()
{
	if(total==0)
 {
 	cout<<"No data is entered yet"<<endl;
 }
 else
 {
 	int a;
 	cout<<"Press 1 to delete full record"<<endl;
 	cout<<"Press 2 to delete specific record"<<endl;
 	cin>>a;
   if(a==1)
   {
   	total=0;
   	cout<<"All record deleted"<<endl;
   }
   else if(a==2)
   {
   	string aadharno;
 	cout<<"Enter Aadhar Number of Person to be deleted:";
 	cin>>aadharno;
 	for(int i=0;i<total;i++) 
	 {
	 	if(aadharno==arr3[i])
		 {
		 	for(int j=i;j<total;j++)
			 {
			 	arr1[j]=arr1[j+1];
			 	arr2[j]=arr2[j+1];
			 	arr3[j]=arr3[j+1];
			 	arr4[j]=arr4[j+1];
			 	arr5[j]=arr5[j+1];
			 	arr6[j]=arr6[j+1];
			 	arr7[j]=arr7[j+1];
			 	arr8[j]=arr8[j+1];
		
			 }
			 total--;
			 cout<<"Your required record is deleted"<<endl;
		 }
	 }
   }
 	
 }
}
main()
{
  int value;
  while(true)
  {
  	cout<<"Press 1 to enter data"<<endl;
  	cout<<"Press 2 to show data"<<endl;
  	cout<<"Press 3 to search data"<<endl;
  	cout<<"Press 4 to update data"<<endl;
  	cout<<"Press 5 to delete data"<<endl;
  	cout<<"Press 6 to exit data"<<endl;
  	cin>>value;
  	switch(value)
  	{
  		case 1:
  			enter();
  			break;
  		case 2:
  			show();
  			break;
  		case 3:
  			search();
  			break;
  		case 4:
  			update();
  			break;
  		case 5:
  			deleterecord();
  			break;
  		case 6:
  			exit(0);
  			break;
  		default:
  			cout<<"Invalid Input"<<endl;
	  }
  }
}
 
