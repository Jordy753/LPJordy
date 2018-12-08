#include<iostream>
#include<string>

using namespace std;

	class Link{
		//...
		bool find(const string& d);
	
	};
	bool Link::find(const string& d){
		Link* p=this;
		while(p->prev!=0){
			p=p->prev;	
		}
		while(p!=0){
			if(p->value==d){
				return true;
			}
			p=p->succ;
		}
		return false;
	}
	
int main(){	
	//....
}
