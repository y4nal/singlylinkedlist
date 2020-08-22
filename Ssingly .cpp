#include<iostream>
#include<string>
#include"Hsingly.h"
using namespace std;
template<typename T>
SinglyList<T>::~SinglyList()
{
	while(head)
		removeFront();
}
	/////////////////////////-removeFront-/////////////////////////////////////////////////////////////////////
template<typename T>
bool SinglyList<T>::removeFront()                                                                              
{
	if(empty()) {cout<<"No data to remove"; return false;}                                                    
	Snode<T>*old=head;                                                                                        
	head=head->next;                                                                                           
	old->next=NULL;
	delete[]old;
	n--;
	return true;
}

	/////////////////////-remove-///////////////////
template<typename T>
bool SinglyList<T>::remove(const T & item)
{
	Snode<T>*temp=head;
	Snode<T>*prev=head;
	if(head==NULL) return false ;
	
	if(temp->data==item)
	{
		head=temp->next;
		delete[]temp;
		n--;
		return true;
	}

	while(temp!=NULL&&temp->data==item)
	{
		prev=temp;
		temp=temp->next;
	}

	if(temp==NULL)return false;

	else
	{

	prev->next=temp->next;
	delete[]temp;
	n--;
	return true;
	}
}
	////////////////////////-removeBack-//////////////////
	template<typename T>
	bool SinglyList<T>::removeBack()
	{
		if(head==NULL)return 0;
		else 
			if(n==1) removeFront();
		else
		{
		Snode<T>*temp1=head;
		while(temp1->next->next!=NULL)
			temp1=temp1->next;
		delete temp1->next;
		temp1->next=NULL;
		n--;
		return 1;
		}
		
	}
	//////////////////////-insertAfter-////////////////////////////////////////////////////////////////////////////////////////
	template<typename T>
	void SinglyList<T>::insertAfter(T pos,T item)
	{
		Snode<T>*temp=new Snode<T>;
		temp->next=NULL;
		temp->data=item;
		if(pos==0)
		{
			Snode<T>*temp2=head;
			temp->next=temp2->next;
			temp2->next=temp;
			n++;
		}
		else if(pos<=n)
		{
			Snode<T>*temp1=head;
			int i=0;
			while(i<pos)
			{
				temp1=temp1->next;
				i++;
			}
			
			temp->next=temp1->next;
			temp1->next=temp;
			n++;
		}

	}
	//////////////////////////////-addFront-////////
template<typename T>
void SinglyList<T>::addFront(const T & item)
{
	
	Snode<T>*p=new Snode<T>;
	p->next=NULL;
	p->data=item;
	if(head==NULL)
	{
		head=p;
		n++;
		return;
	}
	p->next=head;
	head=p;
	n++;
}
	
	/////////////////-insertBefor-////////////

	template<typename T>
	void SinglyList<T>::insertBefor(T pos,T item)
	{
		Snode<T>*temp=new Snode<T>;
		temp->next=NULL;
		temp->data=item;
		if(empty()){cout<<" Link is empty" <<endl; return ;}
		else
		if(pos==n){  cout<<"you Can`t add at this Pos because the numper of nods is "<<n<<endl;}
		else
			if(pos==0){SinglyList<T>::addFront(item); return;}
			else if(pos<=n)
		{
			Snode<T>*temp1=head;
			int i=0;
			while(i<(pos-1))
			{
				temp1=temp1->next;
				i++;
			}
			
			temp->next=temp1->next;
			temp1->next=temp;
			n++;
		}

	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////-display-////////////////
	template<typename T>
	void SinglyList<T>::display()
	{
		Snode<T>*temp2=head;
		if(empty()){cout<<" Link is empty" <<endl; return ;}
		else
		
		while(temp2!=NULL)
		{
			cout<<temp2->data<<endl;
			temp2=temp2->next;
		}
		
	}
	///////////////////////-find-/////////////////
	template<typename T>
	Snode<T>* SinglyList<T>::find (T item)
	{
	Snode<T>*temp=head;
	if(head==NULL) return NULL ;
	
	if(temp->data==item)
	{
		return temp;
	}

	while(temp!=NULL&&temp->data!=item)
		temp=temp->next;
	return  temp;
	}
	////////////////////////-getBack-///////////////
	template<typename T>
	T* SinglyList<T>::getBack()
	{
		if(empty()){cout<<"empy "; return NULL;}
				Snode<T>*temp;
				temp=head;
				while(temp&&temp->next)
				 temp = temp->next;
				return &(temp->data);
				
			}
	///////////////////////////////////////
	template<typename T>
	void SinglyList<T>::insertAfter(Snode<T>*p,const T item)
	{
		Snode<T>*temp=new Snode<T>;
		temp->next=NULL;
		temp->data=item;
		temp->next=p->next;
			p->next=temp;
			n++;
	}
	

	
//////////////////////////////////////////
	template<typename T>
		void print_lots(SinglyList<T>&L,SinglyList<T>&P)
	{
		Snode<T>* templ=L.getHead();
		Snode<T>* tempp=P.getHead();
		int i=0;
		//i=templ->getData();
		//cout<<i;
		
		while(tempp)
		{
			
			i=tempp->getData();
			if(i>=L.size()&&i==0){cout<<"Eror";return;}
			else 
				{
				int m=0;
				while(templ&&m!=(i-1))
				{
					templ=templ->getNext();
					m++;
				}

				}
				cout<<templ->getData()<<endl;
				templ=L.getHead();
				tempp=tempp->getNext();
				
		}
	}
	



	