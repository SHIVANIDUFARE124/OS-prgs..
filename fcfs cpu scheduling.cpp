#include<iostream>
using namespace std;
int main(){
	int n,bt[20],wt[20],tat[20],avgwt=0,i,j,avgtat=0,avg;
	cout<<"enter total no of processes(maximum 20):";
	cin>>n;
	cout<<"\n enter process burst time";
	for(i=0;i<n;i++){
		cout<<"p["<<i+1<<"]:";
		cin>>bt[i];
	}
	wt[0]=0;
	for(i=1;i<n;i++){
		wt[i]=0;
	for(j=0;j<i;j++)
	wt[i]+=bt[j];
}
cout<<"\n process tat bt wt tat";

for(i=0;i<n;i++){
	tat[i]=bt[i]+wt[i];
	avgwt+=tat[i];
	cout<<"\n p["<<i+1<<"]"<<"tat"<<bt[i]<<"tat"<<wt[i]<<tat[i];
}
avgwt/=i;
avgtat/=i;
cout<<"\n average waiting time:"<<avgwt;
cout<<"\n average turn around time:"<<avgtat;
return 0;
	
	
}
