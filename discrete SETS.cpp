#include <iostream>
#include<vector>
using namespace std;

int set1[50],set2[50],a,b,i,j;
void input();
void intersection();
void InUnion();

int main(int argc, char** argv) {
    input();
intersection();
InUnion();
	return 0;
}

void input(){
	cout<<"Enter size for Set(1): "<<endl;
	cin>>a;
	cout<<"Enter set of elements: "<<endl;
	for(i=0;i<a;i++){
		cin>>set1[i];
	}
 		cout<<"Enter size for Set(2)"<<endl;	
		cin>>b;
		cout<<"Enter set of elements"<<endl;
		for(j=0;j<b;j++){
		cin>>set2[j];
		}
}
	
void intersection(){
	cout<<"the intersection of the two sets: ";
for(i=0;i<a;i++){
	for(j=0;j<b;j++){
	if(set1[i]==set2[j])
	cout<<set1[i]<<",";
		}
	}
}

void InUnion(){
	vector<int> unionset;
	for(i=0;i<a;i++){
	unionset.push_back(set1[i]);
	}	
	for(i=0;i<a;i++){
		bool duplicate = false;
		 for(j=0;j<b;j++){
			if(set1[i]==unionset.at(j)){
        	     duplicate=true; 
				}
			}
 		    if(duplicate){
 		   	unionset.push_back(set2[i]);
		    }
		}
cout<<"\nThe union of the two sets: ";
for(i=0;i<unionset.size();i++)
						  cout<<unionset.at(i)<<",";
	}


