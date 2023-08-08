#include<iostream>
#include<string.h>
using namespace std;
int total=0;
string array1[50],array2[50],array3[50],array4[50],array5[50];
void enter_student_database()
{
	int ch=0;
	cout<<"How many students do u want to enter??"<<endl;
	cin>>ch;
	if(total==0)
	{
		total=ch+total;
		for(int i=0;i<ch;i++)
		{
			cout<<"\nEnter the Data of student--> "<<i+1<<endl<<endl;
			cout<<"Enter name--> ";
			cin>>array1[i];
			cout<<"Enter Roll no--> ";
			cin>>array2[i];
			cout<<"Enter course--> ";
			cin>>array3[i];
			cout<<"Enter class--> "; 
			cin>>array4[i];
			cout<<"Enter contact--> ";
			cin>>array5[i];
		}
	}
	else
	{
		for(int i=total;i<ch+total;i++)
		{
			cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
			cout<<"Enter name--> ";
			cin>>array1[i];
			cout<<"Enter Roll no--> ";
			cin>>array2[i];
			cout<<"Enter course--> ";
			cin>>array3[i];
			cout<<"Enter class--> ";
			cin>>array4[i];
			cout<<"Enter contact--> ";
			cin>>array5[i];
		}
		total=ch+total;
	}
}
void show_student_database()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		for(int i=0;i<total;i++)
	    {
	    	cout<<"\nData of Student "<<i+1<<endl<<endl;
	    	cout<<"Name--> "<<array1[i]<<endl;
	    	cout<<"Roll no--> "<<array2[i]<<endl;
	    	cout<<"Course--> "<<array3[i]<<endl;
	    	cout<<"Class--> "<<array4[i]<<endl;
	    	cout<<"Contact--> "<<array5[i]<<endl;
	    }
	}
}
void search_student_database()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		string rollno;
		cout<<"Enter the roll no of student"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==array2[i])
			{
				cout<<"Name--> "<<array1[i]<<endl;
	    	    cout<<"Roll no--> "<<array2[i]<<endl;
	    		cout<<"Course--> "<<array3[i]<<endl;
	    		cout<<"Class--> "<<array4[i]<<endl;
	    	    cout<<"Contact--> "<<array5[i]<<endl;
			}
		}
	}
}
void update_student_database()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		string rollno;
		cout<<"Enter the roll no of student which you want to update"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==array2[i])
			{
				cout<<"\nPrevious data"<<endl<<endl;
				cout<<"Data of Student "<<i+1<<endl;
				cout<<"Name--> "<<array1[i]<<endl;
	    	    cout<<"Roll no--> "<<array2[i]<<endl;
	    		cout<<"Course--> "<<array3[i]<<endl;
	    		cout<<"Class--> "<<array4[i]<<endl;
	    	    cout<<"Contact--> "<<array5[i]<<endl;
	    	    cout<<"\nEnter new data"<<endl<<endl;
				cout<<"Enter name--> ";
				cin>>array1[i];
				cout<<"Enter Roll no--> ";
				cin>>array2[i];
			    cout<<"Enter course--> ";
				cin>>array3[i];
			 	cout<<"Enter class--> ";
				cin>>array4[i];
				cout<<"Enter contact--> ";
				cin>>array5[i];
			}
		}
	}
}
void deleterecord_student_database()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		int a;
	    cout<<"Press 1 to delete all record"<<endl;
		cout<<"Press 2 to delete specific record"<<endl;
		cin>>a;
		if(a==1)
		{
			total=0;
			cout<<"All record is deleted..!!"<<endl;
		}
		else if(a==2)
		{
			string rollno;
			cout<<"Enter the roll no of student which you wanted to delete"<<endl;
			cin>>rollno;
			for(int i=0;i<total;i++)
			{
				if(rollno==array2[i])
				{
					for(int j=i;j<total;j++)
					{
						array1[j]=array1[j+1];
						array2[j]=array2[j+1];
					    array3[j]=array3[j+1];
						array4[j]=array4[j+1];
						array5[j]=array5[j+1];
				    }
					total--;
					cout<<"Your required record is deleted"<<endl;
				}

			}

		}	
		else 
		{
			cout<<"Invalid input";
		}
	}
}
main()
{
	int value;
	while(true)
	{
		cout<<"\nPress 1 to enter data"<<endl;
		cout<<"Press 2 to show data"<<endl;
		cout<<"Press 3 to search data"<<endl;
		cout<<"Press 4 to update data"<<endl;
		cout<<"Press 5 to delete data"<<endl;
		cout<<"Press 6 to exit"<<endl;
		cin>>value;
		switch(value)
		{
		case 1:
			enter_student_database();
			break;
		case 2:
			show_student_database();
			break;
		case 3:
			search_student_database();
			break;
		case 4:
			update_student_database();
			break;
		case 5:
			deleterecord_student_database();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"Invalid input"<<endl;
			break;
		}
	}
}

