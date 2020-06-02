#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
    int count=0;
    string s,t;
    cin>>s>>t;
    map<char,int>hs,ht;
	/*same to same as dictionry key nd value */
	/*yha pr hash dictionary ki trh kam kr rha ai jaise ki python me hota hai.Wo entered character pr jkr uski value ko inc krdet hai tki pta lge ki ye character enetered huwa hai */
    /*for each loop har character ko hs me dal det hai nd uski value ko inc krdet hai  */
	for(auto c:s)
    {
        hs[c]++;
		//cout<<"hs"<<hs[c]<<" "<<endl;
    }
    for(auto c:t)
    {
        ht[c]++;
    }
    for(char i='a';i<'z';i++)
    {
		cout<<"phele k hs[i]"<<" "<<hs[i]<<endl;    //adb acb 
		cout<<"phele k ht[i]"<<" "<<ht[i]<<endl;
        count+=abs(hs[i]-ht[i]);//a=0,b=0 c=-1 d=1
		cout<<"bd k hs[i]"<<" "<<hs[i]<<endl;
		cout<<"bd k ht[i]"<<" "<<ht[i]<<endl;
		cout<<"count ki value"<<" "<<count<<endl;
		cout<<"count"<<" "<<abs(hs[i]-ht[i])<<endl;

    }
    cout<<count<<endl;
}
return 0;
}
/*agar koyi chiz s me hai nd wo t me nhi hai toh count me +1 krdo qki ab ek operation krna hoga t me usko anagram banane ke liye and agar koyi alphabet t me hai nd wo s me nhi hai to bhi count me +1 krdo qki usko htana hoga t se s ka anagram banane ke liye  */
