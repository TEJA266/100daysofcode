#include<bits/stdc++.h>

using namespace std;

int MoonWalk( int CurC, int CurR , int TR , int TC)
{
if(CurR > TR ||CurC > TC)
return 0;
if(CurR == TR && CurC == TC)
return 1;
return MoonWalk(CurR,CurC+1, TR,TC) + MoonWalk(CurR+1,CurC, TR,TC)+MoonWalk(CurR+1,CurC+1, TR,TC) ;
}


int main()
{
int M , N;
cin>>M>>N;
cout<<MoonWalk(0,0,M-1,N-1);
return 0;
}
