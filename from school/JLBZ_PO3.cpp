/* Act no. 3*/

#include<iostream>
using namespace std;

main()
{
	struct record{
		int num;
		char name[100];
		float gwa;
	}student;
	
	/*struct record student;*/
	cout<<"Enter Student no: ";
	cin>>student.num;
	cout<<"Enter Student name: ";
	cin>>student.name;
	cout<<"Enter Student GWA: ";
	cin>>student.gwa;
	cout<<"\nStudent no: "<<student.num<<endl;
	cout<<"Student name: "<<student.name<<endl;
	cout<<"Student GWA: "<<student.gwa<<endl;;
	
	return 0;
}

