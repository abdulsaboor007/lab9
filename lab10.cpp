#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class musicband
{
	protected:
	int count;
virtual	int getcount()=0;
};

class symphony:protected musicband
{
	public:
		
		int members;
		int conductors;
		void addmember();
		void addconductor();
		void removemember();
		void removeconductor();
		int getmember(); 
		int getconductor();
		int getcount();
		symphony(int member,int conductor);
};

void symphony::addmember()
{
	this->members++;
	this->count++;
}

void symphony::addconductor()
{
	this->conductors++;
	this->count++;
}

void symphony::removemember()
{
	this->members--;
	this->count--;
}

void symphony::removeconductor()
{
	this->conductors--;
	this->count--;
}

int symphony::getmember()
{
	return this->members;
}

int symphony::getconductor()
{
	return this->conductors;
}

int symphony::getcount()
{
	return this->count;
}

symphony::symphony(int member,int conductor)
{
	this->members=member;
	this->conductors=conductor;
	this->count=member+conductor;
}





class Metalband:protected musicband
{
	public:
		
		int members;
		int pyrotechnicians;
		void addmember();
		void addpyrotech();
		void removemember();
		void removepyrotech();
		int getmember(); 
		int getpyrotech();
		int getcount();
		Metalband(int member,int pyrotech);
};

void Metalband::addmember()
{
	this->members++;
	this->count++;
}

void Metalband::addpyrotech()
{
	this->pyrotechnicians++;
	this->count++;
}

void Metalband::removemember()
{
	this->members--;
	this->count--;
}

void Metalband::removepyrotech()
{
	this->pyrotechnicians--;
	this->count--;
}

int Metalband::getmember()
{
	return this->members;
}

int Metalband::getpyrotech()
{
	return this->pyrotechnicians;
}

int Metalband::getcount()
{
	return this->count;
}

Metalband::Metalband(int member,int pyrotech)
{
	this->members=member;
	this->pyrotechnicians=pyrotech;
	this->count=member+pyrotech;
}











int main()
{ 
	int mem;
	int cond;
	int mems;
	int pyro;
	
	int sel=0;
	int choose=0;
while(1)
{
		cout<<"\n\nChoose the band by entering the number\n\n1)Symphony\t2)Metalband\n\nEnter the number:";
		cin>>sel;
		if(sel==1)
	{
			cout<<"\nEnter the number of members: ";
			cin>>mem;
			cout<<"\nEnter the number of conductors:";
			cin>>cond;
			symphony s(mem,cond);
			cout<<"\nSymphony band members:"<<s.getmember();
			cout<<"\nSymphony conductors:"<<s.getconductor();
	        cout<<"\ncounter:"<<s.getcount();
			
			cout<<"\nEnter the number to do your desired task\n1)Increment of symphony band members\n2)Decrement of symphony band members\n3)Increment of conductors\n4)Decrement of conductors\nEnter the number:";

		cin>>choose;
		if(choose==1)
		{
			symphony s(mem,cond);
			s.addmember();
			cout<<"\nSymphony band members:"<<s.getmember();
			cout<<"\nSymphony conductors:"<<s.getconductor();
	        cout<<"\ncounter:"<<s.getcount();
			
			
		}
		
		if(choose==2)
		{
			symphony s(mem,cond);
			s.removemember();
			cout<<"\nSymphony band members:"<<s.getmember();
			cout<<"\nSymphony conductors:"<<s.getconductor();
	        cout<<"\ncounter:"<<s.getcount();
			
			
		}
		
		if(choose==3)
		{
			symphony s(mem,cond);
			s.addconductor();
			cout<<"\nSymphony band members:"<<s.getmember();
			cout<<"\nSymphony conductors:"<<s.getconductor();
	        cout<<"\ncounter:"<<s.getcount();
			
			
		}
		
		if(choose==4)
		{
			symphony s(mem,cond);
			s.removeconductor();
			cout<<"\nSymphony band members:"<<s.getmember();
			cout<<"\nSymphony conductors:"<<s.getconductor();
	        cout<<"\ncounter:"<<s.getcount();
		
		}
	}
		
		if(sel==2)
		{
			cout<<"\nEnter the number of members: ";
			cin>>mems;
			cout<<"\nEnter the number of Pyrotechnicians:";
			cin>>pyro;
			Metalband m(mems,pyro);
			cout<<"\nMetalband members:"<<m.getmember();
			cout<<"\nMetalband conductors:"<<m.getpyrotech();
	        cout<<"\ncounter:"<<m.getcount();
			cout<<"\nEnter the number to do your desired task\n1)Increment of Metalband members\n2)Decrement of Metalband members\n3)Increment of Pyrotechnicians\n4)Decrement of Pyrotechnicians\nEnter the number:";
		    cin>>choose;
		
		if(choose==1)
		{
			Metalband m(mems,pyro);
			m.addmember();
			cout<<"\nMetalband members:"<<m.getmember();
			cout<<"\nMetalband pyrotechnicians:"<<m.getpyrotech();
	        cout<<"\ncounter:"<<m.getcount();
			
			
		}
		
		if(choose==2)
		{
			Metalband m(mems,pyro);
			m.removemember();
			cout<<"\nMetalband members:"<<m.getmember();
			cout<<"\nMetalband pyrotechnicians:"<<m.getpyrotech();
	        cout<<"\ncounter:"<<m.getcount();
			
			
		}
		
		if(choose==3)
		{
			Metalband m(mems,pyro);
			m.addpyrotech();
			cout<<"\nMetalband members:"<<m.getmember();
			cout<<"\nMetalband pyrotechnicians:"<<m.getpyrotech();
	        cout<<"\ncounter:"<<m.getcount();
			
			
		}
		
		if(choose==4)
		{
			Metalband m(mems,pyro);
			m.removepyrotech();
			cout<<"\nMetalband members:"<<m.getmember();
			cout<<"\nMetalband pyrotechnicians:"<<m.getpyrotech();
	        cout<<"\ncounter:"<<m.getcount();
			
			
		}
		
		
		
		
		
		
		
		}
		
		
		
		
			
			
		}
		
		
		
		
		
		
	}
