#include<iostream>
#include<string>
using namespace std; 
int main(){ 
	string a;
	
	cout<<"Enter your Word:";
	cin>>a;
	
	if (a=="INFRASTRUCTURE"){
		cout<<"The system of human made physical structures, for example roads, bridge, buildings, communication, tower.";
	}else if (a== "INFRASTRUCTURE DEVELOPMENT"){
		cout<<"The process of building and improving structures.";
	}else if (a=="ROADS"){
		cout<<"Path or streets for cars, buses, and bikes to travel on.";
	}else if (a=="RAILWAYS"){
		cout<<"Train tracks and station that.help people to move along distance.";
	}else if (a=="BRIDGE"){
		cout<<"A structure built over rivers, roads, or valleys to help people and vehicles cross.";
	}else if (a=="TUNNELS"){
		cout<<"Passage dug underground or through mountains for cars, trains.";
	}else if (a=="WIND FARMS"){
		cout<<"Group of wind turbines that uses wind to make electricity.";
	}else if (a=="LANDFILLS"){
		cout<<"Places where trash and waste are burried.";
	}else if (a=="TELECOMMUNICATION TOWER"){
		cout<<"A tall structure that sends and receives phone and internet signals";
	}else if (a=="SATELLITE GROUND"){
		cout<<"A facility that communicates with satellites in space.";
	}else{
		cout<<"No word is found";
	}
	
	return 0;
}