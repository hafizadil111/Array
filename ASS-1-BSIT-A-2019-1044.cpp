#include<iostream>
using namespace std;
int count=0;
//0
void menu()
{
	cout<<endl<<"______*MENU***_*"<<endl;
	cout<<"Press 1 \tto add elements in the array"<<endl;
	cout<<"Press 2 \tto display the elements of array"<<endl;
	cout<<"Press 3 \tto insert elements at articular position in the array"<<endl;
	cout<<"Press 4 \tto delete particular elements in the array"<<endl;
	cout<<"Press 5 \too search elements in the array"<<endl;
	cout<<"Press 6 \too show lenth and number of elements in the array"<<endl;
	cout<<"Press 7 \too copy any list to another list in the array"<<endl;
	cout<<"Press 8 \too clear elementrs in the array"<<endl;
	cout<<"Press 9 \too get elementsat specific place in the array"<<endl;
	cout<<"Press 10 \too replace the elements and update the array"<<endl;
    cout<<endl<<"_________*"<<endl;
}
//1
void ad_element(int array[],int size)
{
  if(count<=size)
  {
   for(int i=0; i<size; i++)
   {
  	cout<<"Enter "<<i+1<<"value to add =";
	cin>>array[i];
	count++; 	
	}
   }
   else
   {
   	cout<<"Array is full";
   }
   cout<<endl;	
}
//2
void traverse(int array[])
{
  if(count==0)
  {
   cout<<"Array is empty"<<endl;
   }
   else
   {
   	cout<<"The Array is displaying here"<<endl;
   	for(int i=0; i<count; i++)
   	cout<<i+1<<" number is ="<<array[i]<<endl;
	}	
}
//3
void insert(int array[],int size)
{
 traverse(array);
 int num,index;
 size=size+1;
 cout<<"Enter index at which you want to insert =";
 cin>>num;
 if(index<size)
 {
  for(int i=size; i>index; i--)
  {
   array[i]=array[i-1];
  }
  array[index-1]=num;
 }
 else
 {
  array[index-1]=num;
 }
 count++;
 traverse(array);
}
//4
void delete_element(int array[])
{
 traverse(array);
 int index;
 cout<<"Enter index of Element to delete =";
 cin>>index;
 index=index-1;
 while(index<=count)
 {
  array[index]=array[index+1];
  index=index+1;	
 }
 count=count-1;
 traverse(array);
}
//5
void search_element(int array[])
{
 if(count==0)
 {
  cout<<"Array is empty"<<endl;	
 }
 else
 {
  int element;
  cout<<"Enter Element to search = ";
  cin>>element;
  for(int i=0; i<count; i++)
  {
   if(element==array[i])
   {
   	cout<<"Element is at index"<<i+1<<endl;
   }	
  }	
 }	
}
//6
void length_count(int size)
{
 cout<<"Length of array is\t"<<size<<endl;
 cout<<"Total numbers of elements in array is\t"<<count<<endl;	
}
//7
void copy(int array[],int size)
{
 int second_array[size];
 cout<<endl<<"T heanother array has copied the data and is shown below"<<endl<<endl;
 for(int i=0; i<count; i++)	
 {
  second_array[i]=array[i];
  cout<<second_array[i]<<" ";
 }
 cout<<endl;
}
//8
void clear()
{
 count=0;
 cout<<"All elements has been deleted"<<endl;	
}
//9
void get_number(int array[], int size)
{
 if(count==0)
 {
  cout<<"The array is empty"<<endl;	
 }
 else
 {
  int index;
  cout<<"Enter index whose value you want =";
  cin>>index;
  for(int i=0; i<count; i++)
  {
   if(array[index]==array[i])
   {
   	cout<<"At"<<index<<"the index, the number is "<<array[i-1]<<endl;
   }
  }	
 }
}
//10
void update(int array[],int size)
{
 if(count==0)
 {
  cout<<"Array is empty"<<endl;
 }
 else
 {
  int index,key;
  traverse(array);
  cout<<"Enter index where you want to insert = ";
  cin>>index;
  if(index<=count)
  {
   cout<<"Enter key which you want to insert = ";
   cin>>key;
   for(int i=0; i<count; i++)
   {
    if(index==i+1)
   {
   	array[i]=key;
   }
  }	
  cout<<"The updated value are"<<endl;
  traverse(array);
 }
}
}
int main()
{
 int size=4,array[size];
 while(true)
 {
  menu();
  int num;
  cout<<endl<<endl<<"--------------"<<endl;
  cout<<"Enter 1-10 number =";
  cin>>num;
  cout<<"-----------"<<endl;
  switch(num)
  {
   case 1:
   {
   ad_element(array,size);
   break;
   }
   case 2:
   {
    traverse(array);
    break;
    }
	case 3:
	{
	insert(array,size);
	break;
	}	
	case 4:
	{
	delete_element(array);
	break;	
	}	
	case 5:
	{
	search_element(array);
	break;	
	}	
	case 6:
	{
	length_count(size);
	break;	
	}
	case 7:
	{
	copy(array,size);
	break;	
	}
	case 8:
	{
	clear();
	break;	
	}
	case 9:
	{
	get_number(array,size);
	break;
	}
	case 10:
	{
	update(array,size);
	break;
    } 
    default:
    {
    cout<<"Invalid choice"<<endl;
	}
  }
 }
 return 0;
}
