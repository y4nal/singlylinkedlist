#include<iostream>
#include"Ssingly.cpp"
using namespace std;

void main(void)
{
	SinglyList<int> s;
	s.addFront(1);
	s.addFront(2);
	s.addFront(3);
	SinglyList<int> d;
	d.addFront(1);
	d.addFront(2);
	d.addFront(3);
	cout<<"-----------------------"<<endl;
	s.display();
	cout<<"--------------"<<endl;
	d.display();
	cout<<"-----------------"<<endl;
	print_lots(s,d);
	cout<<"size "<<s.size()<<endl;
	

}