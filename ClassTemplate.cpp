#include<iostream>
using namespace std;

template <typename T> 
	class Mystack{
		private:
			int top;
			int size;
			T* arr;
		public:
			Mystack(int);
			void push(T);
			T pop();
	};
	
	template<typename T> Mystack<T>::Mystack(int s){
		size = s;
		top = -1;
		arr = new T[size];
	}
	template<typename T> void Mystack<T>::push (T e)
	{
		top++;
		arr[top]=e;
	}
	template<typename T> T Mystack<T> :: pop(){
		return (arr[top--]); 
	}
	int main(){
		Mystack<float> s1(3);
		s1.push(5.5);
		s1.push(6.6);
		s1.push(7.7);
		
		cout<<s1.pop()<<endl;
		cout<<s1.pop()<<endl;
		cout<<s1.pop()<<endl;
		
		Mystack<int> s2(5);
		s2.push(10);
		s2.push(20);
		s2.push(30);
		s2.push(40);
		s2.push(50);
		
		cout << s2.pop() << endl;
		cout << s2.pop() << endl;
		cout << s2.pop() << endl;
		cout << s2.pop() << endl;
		cout << s2.pop() << endl;
		
		return 0;
	}
	
	
