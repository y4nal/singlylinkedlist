#pragma once
#ifndef Slist					
#define  Slist
template<typename T>
	class Snode
	{
	private:
		T data;
		Snode<T> * next;
		template<typename T>
			friend class SinglyList;
	public:
		Snode<T> *getNext(){return next;}
		T getData(){return data;};
	};
	template<typename T>
		class SinglyList
		{
		private:
			Snode<T> *head;
			int n;
		public:


			SinglyList():head(NULL),n(0){}//done
			//SinglyList(const SinglyList<T>& obj);//done
            ~SinglyList();//done
			bool empty ()const
			{
				return n<=0&&head==NULL;
			}//done
			int size()const{ return n;}//done
			void addFront(const T & item);//done
			T &getFront()const
			{
				return head->data;
			}//done
			bool remove(const T & item);//done
			bool removeFront();//done
			T* getBack();//done
			bool removeBack();//done
			//void reverse();//
			void insertAfter(T pos,T item);//done
			void insertBefor(T pos,T item);//done
			Snode<T>* find (T item);//done
			void display();//done
			void insertAfter(Snode<T>*p,const T item);
			void printPos(T pos);
			Snode<T>* getHead(){return head;}
			
			void print_lots(SinglyList<T> &L,SinglyList<T> &P);


			
		};
			
				#endif