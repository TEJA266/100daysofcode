#include<bits/stdc++.h>
using namespace std;
bool AnagramCheck( string Str1, string Str2)
{
int Freq1[26]={0}; // hashmap for Str1 this will give us frequency count of Str1
int Freq2[26]={0};
int i=0; //aabc
while(Str1[i]!='\0') // L
{
Freq1[Str1[i] -'a']++; //L + L + C
i++;
} //2L+26 O(L)
i=0;
while(Str2[i]!='\0') //L
{
Freq2[Str2[i] -'a']++;
i++;
}

for( int i=0; i<26;i++) //26 constant
{
if(Freq1[i]!=Freq2[i])
return false;
}
return true;

// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 -------- 25
} // 2 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
int main()
{ //aabbccc
string Str1 , Str2;
int TC;
cin>>TC;
for( int i=1;i<=TC;i++)
{
cin>>Str1>>Str2;
int Len1=Str1.length();
int Len2 = Str2.length();
if(Len1!=Len2)
cout<<endl<<"Not Anagram";
else
{
if(AnagramCheck(Str1,Str2))
cout<<endl<<"Anagram";
else
cout<<endl<<"Not Anagram";
}
}
return 0;
}
